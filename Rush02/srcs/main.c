/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbossard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:31:02 by cbossard          #+#    #+#             */
/*   Updated: 2016/08/20 16:58:20 by cbossard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colle_2.h"
#include "../includes/ft_colle_tab.h"
#include "../includes/header.h"

void	print_colle(char c, int line, int col)
{
	ft_putstr("[colle-0");
	ft_putchar(c);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("]");
}

int		ft_collecmp(char *str, int line, int col)
{
	char	*colle;
	int		i;
	int		a;

	colle = (char*)malloc(sizeof(char) * ((line + 1) * col) + 1);
	if (!colle)
		return (0);
	colle[(line + 1) * col] = 0;
	i = -1;
	a = 0;
	while (++i < 5)
	{
		g_colletab[i].colle(line, col, colle);
		if (!ft_strcmp(str, colle))
		{
			if (a)
				ft_putstr(" || ");
			a++;
			print_colle(g_colletab[i].c, line, col);
		}
	}
	if (!a)
		ft_putstr("aucune");
	ft_putchar('\n');
	return (a);
}

int		main(void)
{
	char	*str;

	str = ft_read();
	if (str[0] == '\n')
	{
		ft_putstr("aucune\n");
		return (0);
	}
	ft_collecmp(str, ft_line_len(str), ft_nbr_col(str));
	return (0);
}
