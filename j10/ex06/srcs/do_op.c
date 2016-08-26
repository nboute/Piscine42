/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 23:25:47 by nboute            #+#    #+#             */
/*   Updated: 2016/08/18 23:55:29 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/ft_opp.h"

int		ft_error(char c)
{
	if (c == '/')
		write(1, "Stop : division by zero\n", 24);
	else
		write(1, "Stop : modulo by zero\n", 22);
	return (1);
}

int		main(int ac, char **av)
{
	char	c;
	int		i;
	int		isop;

	if (ac != 4)
		return (0);
	c = av[2][0];
	isop = 0;
	if ((c == '/' || c == '%') && ft_atoi(av[3]) == 0)
		return (ft_error(c));
	i = 0;
	while (g_opptab[i].c)
	{
		if (c == g_opptab[i].c[0])
		{
			ft_putnbr(g_opptab[i].fct(ft_atoi(av[1]), ft_atoi(av[3])));
			isop = 1;
		}
		i++;
	}
	if (isop != 1)
		write(1, "0", 1);
	ft_putchar('\n');
	return (0);
}
