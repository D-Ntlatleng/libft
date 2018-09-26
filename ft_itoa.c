/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 16:22:06 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/17 15:21:21 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n = (int)n / 10;
		i++;
	}
	return (i);
}

static void	str(char *temp, int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		temp[i++] = '-';
	}
	while (n)
	{
		temp[i++] = n % 10 + 48;
		n /= 10;
	}
	temp[i] = '\0';
}

char		*ft_itoa(int n)
{
	char	*temp;
	size_t	j;
	size_t	i;
	char	c[ft_size(n) + 1];

	if (n == 0)
		return (ft_strdup("0"));
	if (!(temp = (char *)malloc(ft_size(n) + 1)))
		return (NULL);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	j = 0;
	str(c, n);
	if (c[0] == '-')
		temp[j++] = '-';
	i = ft_strlen(c) - 1;
	while (j < ft_strlen(c))
		temp[j++] = c[i--];
	temp[j] = '\0';
	return (temp);
}
