/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:30:20 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/06 18:10:49 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words(char const *s, char c)
{
	unsigned int		i;
	unsigned int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	char	*start;
	char	*end;
	int		k;

	if (!s)
		return (NULL);
	k = -1;
	if (!(array = (char **)ft_calloc((words(s, c) + 1), sizeof(char *))))
		return (NULL);
	if (words(s, c) == 0)
		return (array);
	while (*s)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s != c && *s != '\0')
			end = (char *)s++;
		if (end < start)
			break ;
		array[++k] = ft_substr(start, 0, (end - start + 1));
	}
	array[k + 1] = (char *)NULL;
	return (array);
}
