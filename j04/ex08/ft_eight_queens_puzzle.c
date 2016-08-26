/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:20:21 by nboute            #+#    #+#             */
/*   Updated: 2016/08/06 17:11:45 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		issafe(int rows[8], int y, int x)
{
	int i;

	if (y == 0)
		return (0);
	i = 0;
	while (i < y)
	{
		if (rows[i] == x - y + i || rows[i] == x + y - i || rows[i] == x)
			return (-1);
		i++;
	}
	return (0);
}

int		ft_queens_solver(int rows[8], int solutions, int y)
{
	int x;

	x = 0;
	while (x < 8)
	{
		if (issafe(rows, y, x) == 0)
		{
			rows[y] = x;
			if (y == 7)
				solutions++;
			else
				solutions = ft_queens_solver(rows, solutions, y + 1);
		}
		x++;
	}
	return (solutions);
}

int		ft_eight_queens_puzzle(void)
{
	int	rows[8];

	return (ft_queens_solver(rows, 0, 0));
}
