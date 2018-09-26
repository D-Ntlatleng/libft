/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 11:17:45 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/02 12:39:10 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				j;
	unsigned char	*str1;
	unsigned char	*str2;

	i = ft_strlen(s1);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (ft_strlen(s1) < ft_strlen(s2))
		i = ft_strlen(s2);
	if (i >= n)
		i = n;
	j = 0;
	while (i > 0)
	{
		if (str1[j] > str2[j])
			return (str1[j] - str2[j]);
		else if (str1[j] < str2[j])
			return (str1[j] - str2[j]);
		i--;
		j++;
	}
	return (0);
}
