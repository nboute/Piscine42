/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbossard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 18:31:19 by cbossard          #+#    #+#             */
/*   Updated: 2016/08/20 16:06:13 by cbossard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colle_2.h"

void	ft_putnbr(int a)
{
	if (a == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (a < 0)
		{
			a = -a;
			ft_putchar('-');
		}
		if (a > 9)
		{
			ft_putnbr(a / 10);
			ft_putnbr(a % 10);
		}
		else
			ft_putchar(a + 48);
	}
}
