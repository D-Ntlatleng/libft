/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:25:20 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/13 10:28:55 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*source;

	i = 0;
	temp = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	return (temp);
}
