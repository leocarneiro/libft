/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:48:44 by lramos-r          #+#    #+#             */
/*   Updated: 2020/01/27 15:28:16 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n != 0 && *s != (unsigned char)c)
	{
		*d++ = *s++;
		n--;
	}
	if (*s == (unsigned char)c)
	{
		*d = *s;
		return (++d);
	}
	return (NULL);
}
