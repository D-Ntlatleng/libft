/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:39:33 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/17 14:36:12 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s)
{
	int i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*temp;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == ft_size(s))
		return (ft_strdup(""));
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i--;
	if (!(temp = (char *)malloc(i - ft_size(s) + 2)))
		return (NULL);
	j = ft_size(s);
	k = 0;
	while (j <= i)
		temp[k++] = s[j++];
	temp[k] = '\0';
	return (temp);
}
