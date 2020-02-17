/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:45:31 by lramos-r          #+#    #+#             */
/*   Updated: 2020/02/06 14:17:13 by lramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
