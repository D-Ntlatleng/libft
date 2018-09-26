/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:30:34 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/17 14:25:24 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	if ((temp = (char *)malloc(len + 1)) == NULL)
		return (NULL);
	i = len + start;
	len = 0;
	if (s != NULL)
	{
		while (start < i && s[start])
			temp[len++] = s[start++];
		temp[len] = '\0';
	}
	return (temp);
}
