/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dntlatle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:08:53 by dntlatle          #+#    #+#             */
/*   Updated: 2018/06/13 16:01:56 by dntlatle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long i;

	i = (long)n;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
}
