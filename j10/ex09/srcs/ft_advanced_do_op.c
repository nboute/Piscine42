/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_do_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:29:21 by nboute            #+#    #+#             */
/*   Updated: 2016/08/18 23:57:30 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/ft_opp.h"

char	isop(char c)
{
	int		i;

	i = 0;
	while (g_opptab[i].c)
	{
		if (c == g_opptab[i].c[0])
			return (c);
		i++;
	}
	return ('\0');
}

int		main(int ac, char **av)
{
	char	c;
	int		i;

	if (ac != 4)
		return (0);
	c = isop(av[2][0]);
	if ((c == '/' || c == '%') && ft_atoi(av[3]) == 0)
		return (ft_error(c));
	i = 0;
	while (g_opptab[i].c)
	{
		if (c == g_opptab[i].c[0])
		{
			if (c != '\0')
				ft_putnbr(g_opptab[i].fct(ft_atoi(av[1]), ft_atoi(av[3])));
			else
				g_opptab[i].fct(0, 0);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
