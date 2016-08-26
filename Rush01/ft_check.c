/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:25:49 by nboute            #+#    #+#             */
/*   Updated: 2016/08/14 16:42:27 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_block(int tab[9][9], int i, int j, int n)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if ((x / 3) == (i / 3) && (y / 3) == (j / 3))
				if (tab[x][y] == n && (x != i || y != j))
					return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		ft_check(int tab[9][9], int i, int j, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		if (n == tab[x][j] && (x != i))
			return (0);
		x++;
	}
	while (y < 9)
	{
		if (n == tab[i][y] && (y != j))
		{
			return (0);
		}
		y++;
	}
	return (ft_check_block(tab, i, j, n));
	return (1);
}

int		ft_check_grids(int tab[2][9][9])
{
	int j;
	int k;

	j = 0;
	while (j < 9)
	{
		k = 0;
		while (k < 9)
		{
			if (tab[0][j][k] != tab[1][j][k] || tab[0][j][k] == 0)
				return (1);
			k++;
		}
		j++;
	}
	return (0);
}
