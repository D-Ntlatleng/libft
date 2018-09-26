/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:29:00 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/18 12:44:54 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	raw(char const *s, char c)
{
	int i;
	int k;

	k = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		i = 0;
		while (*s != c && *s != '\0')
		{
			i++;
			s++;
		}
		if (i)
			k++;
		s++;
	}
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**string;

	if (s == NULL || c == 0)
		return (NULL);
	if (!(string = (char **)malloc(raw(s, c) * sizeof(char *) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < raw(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
			string[j++] = ft_strsub(s, start, i - start);
	}
	string[j] = NULL;
	return (string);
}
