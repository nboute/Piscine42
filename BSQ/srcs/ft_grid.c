/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:10:42 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 21:40:04 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_grid.h"

int		ft_grid_size(int fd)
{
	char	buff[BUFF_SIZE];
	int		count;
	int		ret;

	count = 0;
	while ((ret = read(fd, &buff, BUFF_SIZE)))
		count += ret;
	return (count);
	close(fd);
}

char	*ft_grid_str(char *av, int fd)
{
	char	*grid;
	char	buff[BUFF_SIZE + 1];
	int		ret;
	int		current_size;

	current_size = 0;
	grid = (char*)malloc(sizeof(char) * ft_grid_size(fd) + 1);
	*grid = '\0';
	fd = open(av, O_RDONLY);
	while ((ret = read(fd, &buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		ft_str_longcat(grid, buff, current_size, ret);
		current_size += ret;
	}
	close(fd);
	return (grid);
}

void	ft_print_grid(char **grid, int col)
{
	int i;

	i = 0;
	while (*grid)
	{
		write(1, *grid, col);
		grid++;
	}
}
