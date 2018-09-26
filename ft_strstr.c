/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:18:19 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/13 10:43:18 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (j <= ft_strlen(haystack))
	{
		if (haystack[j] == *needle)
		{
			i = ft_strncmp(needle, haystack + j, ft_strlen(needle));
			if (i == 0)
				return ((char *)haystack + j);
		}
		j++;
	}
	return (NULL);
}
