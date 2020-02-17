/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:23:58 by lramos-r          #+#    #+#             */
/*   Updated: 2020/01/27 15:10:15 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len;
	size_t	i;

	len = 0;
	if (src == NULL)
		return (len);
	while (src[len])
		len++;
	if (len + 1 < siz)
	{
		i = -1;
		while (++i < len + 1)
			dst[i] = src[i];
	}
	else if (siz != 0)
	{
		i = -1;
		while (++i < siz - 1)
			dst[i] = src[i];
		dst[siz - 1] = '\0';
	}
	return (len);
}
