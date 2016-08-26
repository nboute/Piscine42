/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:08:45 by nboute            #+#    #+#             */
/*   Updated: 2016/08/14 16:51:59 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_error(void);
int		ft_print_result(int grid[9][9]);
int		ft_check_block(int tab[9][9], int i, int j, int n);
int		ft_check(int tab[9][9], int i, int j, int n);
int		ft_check_grids(int tab[2][9][9]);

int		ft_solve(int tab[9][9], int pos, int x)
{
	if (pos == 81)
	{
		return (1);
	}
	if (tab[pos / 9][pos % 9] != 0)
		return (ft_solve(tab, pos + 1, 1));
	else
	{
		while (x <= 9)
		{
			if (ft_check(tab, (pos / 9), (pos % 9), x))
			{
				tab[pos / 9][pos % 9] = x;
				if (ft_solve(tab, pos + 1, 1))
					return (1);
			}
			x++;
		}
		tab[pos / 9][pos % 9] = 0;
	}
	return (0);
}

int		ft_solve_rev(int tab[9][9], int pos, int x)
{
	if (pos < 0)
	{
		return (1);
	}
	if (tab[pos / 9][pos % 9] != 0)
	{
		if (ft_solve_rev(tab, pos - 1, 9))
			return (1);
	}
	else
	{
		while (x >= 1)
		{
			if (ft_check(tab, (pos / 9), (pos % 9), x))
			{
				tab[pos / 9][pos % 9] = x;
				if (ft_solve_rev(tab, pos - 1, 9))
					return (1);
			}
			x--;
		}
		tab[pos / 9][pos % 9] = 0;
	}
	return (0);
}

void	ft_fill_tab(int grid[2][9][9], char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] == '.')
			{
				grid[0][i][j] = 0;
				grid[1][i][j] = 0;
			}
			else
			{
				grid[0][i][j] = tab[i][j] - '0';
				grid[1][i][j] = tab[i][j] - '0';
			}
			j++;
		}
		i++;
	}
}

void	ft_sudoku(char **tab)
{
	int grid[2][9][9];

	ft_fill_tab(grid, tab);
	ft_solve(grid[0], 0, 1);
	ft_solve_rev(grid[1], 81, 9);
	if (ft_check_grids(grid))
	{
		ft_error();
		return ;
	}
	ft_print_result(grid[0]);
}
