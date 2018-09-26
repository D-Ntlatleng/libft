/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuenda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:35:18 by kmuenda           #+#    #+#             */
/*   Updated: 2018/06/17 14:24:23 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;

	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	while (j < len && haystack[j] != '\0')
	{
		if (ft_strncmp(needle, haystack + j, ft_strlen(needle)) == 0)
			if (j + ft_strlen(needle) <= len)
				return ((char *)haystack + j);
		j++;
	}
	return (NULL);
}
