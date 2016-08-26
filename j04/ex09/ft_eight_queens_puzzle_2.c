/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:06:32 by nboute            #+#    #+#             */
/*   Updated: 2016/08/08 20:06:36 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printresult(int board[8])
{
	int n;

	n = 0;
	while (n < 8)
	{
		ft_putchar(board[n] + 1 + 48);
		n++;
	}
	ft_putchar('\n');
}

int		issafe(int board[8], int y, int x)
{
	int n;

	if (y == 0)
		return (0);
	n = 0;
	while (n < y)
	{
		if (board[n] == x - y + n || board[n] == x + y - n || board[n] == x)
			return (-1);
		n++;
	}
	return (0);
}

void	ft_queens_solver(int board[8], int y)
{
	int x;

	x = 0;
	while (x < 8)
	{
		if (issafe(board, y, x) == 0)
		{
			board[y] = x;
			if (y == 7)
			{
				ft_printresult(board);
			}
			else
				ft_queens_solver(board, y + 1);
		}
		x++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int	board[8];

	ft_queens_solver(board, 0);
}
