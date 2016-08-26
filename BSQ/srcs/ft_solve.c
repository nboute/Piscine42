/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 09:46:25 by nboute            #+#    #+#             */
/*   Updated: 2016/08/25 14:22:44 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solve.h"

int		**ctab_to_itab(char **grid, char symbol, int line, int col)
{
	int i;
	int j;
	int **tab;

	if ((tab = (int**)malloc(sizeof(int*) * line)) == 0)
		return (0);
	i = 0;
	while (i < line)
	{
		if ((tab[i] = (int*)malloc(sizeof(int) * col)) == 0)
			return (0);
		j = 0;
		while (j < col)
		{
			if (grid[i][j] == symbol)
				tab[i][j] = 0;
			else if (grid[i][j] != '\n')
				tab[i][j] = 1;
			j++;
		}
		i++;
	}
	return (tab);
}

int		ft_set_square_max(int **tab, int i, int j)
{
	int lowest;

	lowest = 1;
	if (i - 1 >= 0 && j - 1 >= 0)
	{
		if (tab[i][j - 1] <= tab[i - 1][j]
				&& tab[i][j - 1] <= tab[i - 1][j - 1])
			tab[i][j] = tab[i][j - 1] + 1;
		else if (tab[i - 1][j] <= tab[i][j - 1]
				&& tab[i - 1][j] <= tab[i - 1][j - 1])
			tab[i][j] = tab[i - 1][j] + 1;
		else if (tab[i - 1][j - 1] <= tab[i - 1][j]
				&& tab[i - 1][j - 1] <= tab[i][j - 1])
			tab[i][j] = tab[i - 1][j - 1] + 1;
	}
	return (tab[i][j]);
}

void	ft_fill_square(char **grid, int *max, char f)
{
	int x;
	int y;

	x = 0;
	while (x < max[0])
	{
		y = 0;
		while (y < max[0])
		{
			grid[max[1] - x][max[2] - y] = f;
			y++;
		}
		x++;
	}
}

int		*ft_set_values(int **tab, int xy[2], int *max)
{
	int i;
	int j;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < xy[0])
	{
		j = 0;
		while (j < xy[1])
		{
			if (tab[i][j] != 0)
				tmp = ft_set_square_max(tab, i, j);
			if (tmp > max[0])
			{
				max[0] = tmp;
				max[1] = i;
				max[2] = j;
			}
			++j;
		}
		++i;
	}
	return (max);
}

void	ft_solve(char **grid, t_params *infos)
{
	int **tab;
	int xy[2];
	int *max;

	grid++;
	max = 0;
	max = (int*)(malloc(sizeof(int) * 3));
	max[0] = 0;
	xy[0] = infos->line;
	xy[1] = infos->col - 1;
	tab = ctab_to_itab(grid, infos->obst, xy[0], xy[1]);
	max = ft_set_values(tab, xy, max);
	ft_fill_square(grid, max, infos->full);
	ft_print_grid(grid, infos->col);
}
