/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:00:41 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/06 13:38:05 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n <= 0)
		return (0);
	i = n - 1;
	while (i > 0 && *str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		i--;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
