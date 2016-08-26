/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moi.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpachy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:07:26 by hpachy            #+#    #+#             */
/*   Updated: 2016/08/13 13:07:28 by hpachy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int norme(char **argv)
{
	int x;
	int y;
	char c;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (argv[y][x] != '\0')
		{
			if ((argv[y][x] <= '9' && argv[y][x] >= '0') || argv[y][x] == '.')
				x++;
			else
				return(0);
		}
		if (y > 9)
			return (0);
		y++;
	}
	return(1);	
}

int checkerligne(char **argv)
{
	int x;
	int y;
	int xcheck;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (argv[y][x] != '\0')
		{	
			xcheck = 0;
			while (argv[y][xcheck] != '\0')
			{
				if (argv[y][xcheck] == argv[y][x] && xcheck != x)
					return (0);
				xcheck++;
			}
			x++;
		}
		y++;
	}
	return(1);
}

int checkercolone(char **argv)
{
	int x;
	int y;
	int ycheck;
	
	x = 0;
	while (x < 9)
	{
		y = 0;
		while (argv[y])
		{
			ycheck = 0;
			while (ycheck < 9)
			{
				if ((argv[ycheck][x] == argv[y][x]) && ycheck != y)
						return(0);
				ycheck++;
			}
			y++;
		}
		x++;
	}
	return (1);
}

int checker3par3(char **argv)
{
	int x;
	int y;
	int xcheck;
	int ycheck;

	y = -1;
	while (++y < 9)
	{
		x = -1;
		while (++x < 9)
		{
			ycheck = -1;
			while (++ycheck < 9)
			{
				xcheck = -1;
				while (++xcheck < 9)
				{
					if (y/3 == ycheck/3 && x/3 == xcheck/3 
						&& argv[y][x] == argv[ycheck][xcheck] 
						&& (y != ycheck || x != xcheck))
						return (0);
				}

			}
		}
	}
	return (1);
}

int checker(char **argv)
{
	if (norme(argv) != 1)
	{
		write (1, "NULL_NORME", 10);
		return (0);
	}
	if (checkerligne(argv) != 1)
	{
		write (1, "NULL_LIGNE", 10);
		return (0);
	}
	if (checkercolone(argv) != 1)
	{
			write (1, "NULL_COLONE", 11);
			return (0);
	}
	if (checker3par3(argv) != 1)
	{
		write (1, "NULL_3PAR3", 10);
		return (0);
	}
	return (1);
}
