/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:16:23 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/06 16:40:47 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	begin(char const *str, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (str[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	end(char const *str, char const *set)
{
	int		k;
	int		j;

	k = ft_strlen(str) - 1;
	j = 0;
	while (set[j] && k >= 0)
	{
		if (str[k] == set[j])
		{
			k--;
			j = 0;
		}
		else
			j++;
	}
	return (k);
}

char		*ft_strtrim(char const *str, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trimmed;

	if (set == NULL || str == NULL)
		return (NULL);
	i = begin(str, set);
	k = end(str, set);
	if (k < i)
	{
		trimmed = (char *)malloc(1);
		trimmed[0] = '\0';
		return (trimmed);
	}
	if (!(trimmed = (char *)malloc((k - i + 2) * sizeof(char))))
		return (NULL);
	j = 0;
	while (i <= k)
	{
		trimmed[j++] = str[i];
		i++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
