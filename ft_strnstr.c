/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:16:08 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/04 12:42:16 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t			i;
	size_t			j;

	if (!*sub)
		return ((char *)str);
	i = 0;
	j = 0;
	while (str[i] && i < len)
	{
		while (str[i] == sub[j] && i < len)
		{
			i++;
			j++;
			if (!sub[j])
				return ((char *)&str[i - j]);
			if (str[i] != sub[j])
				j = 0;
		}
		i++;
	}
	return (NULL);
}
