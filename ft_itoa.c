/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:03:08 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/06 18:35:32 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nblen(long int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len = 2;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	len;
	long	p;
	long	i;

	i = (long)n;
	p = nblen(i);
	len = p;
	if (!(result = (char *)(malloc((len + 1) * sizeof(char)))))
		return (NULL);
	if (i == 0)
		result[0] = '0';
	if (i < 0)
	{
		result[0] = '-';
		i *= -1;
	}
	while (i / 10 >= 0 && ((i > 0) ? (--len >= 0) : (--len > 0)))
	{
		result[len] = '0' + i % 10;
		i = i / 10;
	}
	result[p] = '\0';
	return (result);
}
