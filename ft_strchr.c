/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:31:47 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/02 13:26:22 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	int		j;

	i = ft_strlen(str) + 1;
	j = 0;
	while (i)
	{
		if (c == str[j])
			return ((char *)str + j);
		i--;
		j++;
	}
	return (NULL);
}
