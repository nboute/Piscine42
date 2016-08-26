/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:30:29 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/25 20:31:35 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	char		**grid;
	char		*std_input;
	t_params	*params;

	grid = 0;
	if (argc == 1)
	{
		std_input = ft_get_std_input();
		if ((params = ft_test(std_input, &grid, STD_INPUT)))
			ft_solve(grid, params);
	}
	else
	{
		while (*(++argv))
		{
			if ((params = ft_test(*argv, &grid, ARGV)))
				ft_solve(grid, params);
			if (*(argv + 1))
				ft_putchar('\n');
		}
	}
	return (0);
}
