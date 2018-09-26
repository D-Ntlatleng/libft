/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:31:57 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/13 11:52:02 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t j;

	j = 0;
	while (j < len && src[j])
	{
		dst[j] = (char)src[j];
		j++;
	}
	while (j < len)
		dst[j++] = '\0';
	return (dst);
}
