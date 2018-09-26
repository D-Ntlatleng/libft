/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:43:42 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/17 14:34:52 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*temp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(temp = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_strlen(s1))
		temp[j++] = s1[i++];
	i = 0;
	while (j < (ft_strlen(s1) + ft_strlen(s2)))
		temp[j++] = s2[i++];
	temp[j] = '\0';
	return (temp);
}
