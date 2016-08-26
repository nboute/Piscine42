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

int repere(char **argv)
{
	int x;
	int y;
	char c;

	x = 0;
	while (argv[y] != '\0')
	{
		x = 0;
		while (argv[y][x] != '\0')
		{
			x++;
		}
		if (y > 9)
			return (0);
		y++;
	}
	if (y > 9)
		return(0);
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

int checker(char **argv)
{
	if (checkerligne(argv) != 1)
	{
		write (1, "NULL", 9);
		return (0);
	}
	if (checkercolone(argv) != 1)
	{
			write (1, "NULL", 4);
			return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	argv++;
	if (checker(argv) != 0)
	{
		while (i < argc - 1)
		{
			printf("%s | %i\n", argv[i], i);
			i++;
		}
	}
	return (0);
}
