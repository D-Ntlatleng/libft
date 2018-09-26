/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:01:11 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/13 10:30:21 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			i;

	i = 0;
	c = (unsigned char)c;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sorc[i];
		if (sorc[i] == c)
			return (void *)(dest + i + 1);
		i++;
	}
	return (NULL);
}
