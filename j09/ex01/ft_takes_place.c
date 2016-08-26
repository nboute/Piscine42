/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:49:25 by nboute            #+#    #+#             */
/*   Updated: 2016/08/11 21:55:21 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_format(int *hour)
{
	char c;

	c = 0;
	if (*hour == 24 || *hour == 0)
	{
		c = 'A';
		*hour = 12;
	}
	else if (*hour >= 12 && *hour <= 23)
		c = 'P';
	else if (*hour > 0 && *hour < 12)
		c = 'A';
	if (*hour > 12 && *hour < 24)
		*hour = *hour % 12;
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_takes_place(int hour)
{
	char	c;
	char	c2;
	int		hour2;

	hour2 = (hour + 1) % 24;
	c = ft_format(&hour);
	c2 = ft_format(&hour2);
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	ft_putchar(hour / 10 + 48);
	ft_putchar(hour % 10 + 48);
	write(1, ".00 ", 4);
	ft_putchar(c);
	write(1, ".M. AND ", 8);
	ft_putchar(hour2 / 10 + 48);
	ft_putchar(hour2 % 10 + 48);
	write(1, ".00 ", 4);
	ft_putchar(c2);
	write(1, ".M.\n", 4);
}
