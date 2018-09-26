/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:13:43 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/17 14:37:13 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	int		j;
	int		k;

	i = ft_strlen(str) + 1;
	j = 0;
	k = -1;
	while (i)
	{
		if (c == str[j])
			k = j;
		i--;
		j++;
	}
	if (k != -1)
		return ((char *)str + k);
	return (NULL);
}
