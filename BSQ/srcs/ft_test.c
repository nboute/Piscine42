/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:18:09 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/25 14:32:13 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

char		*ft_line_nbr(char *line)
{
	char	*line_nbr;
	int		size;
	int		i;

	size = ft_strlen(line);
	i = 0;
	if (size < 5)
		return (0);
	line_nbr = (char*)malloc(sizeof(char) * (size - 3));
	while (i < size - 4)
	{
		line_nbr[i] = (line[i]);
		i++;
	}
	line_nbr[i] = '\0';
	return (line_nbr);
}

t_params	*ft_test_params(char *line_0)
{
	t_params	*params;
	char		*line_nbr;
	int			nbr_lines;
	int			size_line_nbr;

	params = ft_params_def();
	if (!(line_nbr = ft_line_nbr(line_0)))
		return (0);
	if (!(nbr_lines = ft_atoi_pos(line_nbr)))
		return (0);
	params->line = nbr_lines;
	size_line_nbr = ft_strlen(line_nbr);
	while (size_line_nbr--)
		line_0++;
	if (!line_0[0] || !line_0[1] || !line_0[2] || line_0[0] == line_0[1] ||
		line_0[0] == line_0[2] || line_0[1] == line_0[2] || !line_0[3] ||
		line_0[3] != '\n')
		return (0);
	params->empty = line_0[0];
	params->obst = line_0[1];
	params->full = line_0[2];
	return (params);
}

int			ft_valid_line(char *line, t_params par)
{
	if (ft_strlen(line) != par.col)
		return (0);
	while (*line)
	{
		if (*line != par.empty && *line != par.obst && *line != '\n')
			return (0);
		line++;
	}
	return (1);
}

int			ft_test_grid(char **grid, t_params *params)
{
	int		nbr_lines;

	nbr_lines = 0;
	params->col = ft_strlen(*(++grid));
	while (*grid)
	{
		nbr_lines++;
		if (!ft_valid_line(*grid, *params))
			return (0);
		grid++;
	}
	if (nbr_lines != params->line)
		return (0);
	return (1);
}

t_params	*ft_test(char *av, char ***grid, int mode)
{
	t_params	*params;
	int			fd;

	if ((fd = open(av, O_RDONLY)) == -1 && mode == ARGV)
		return (ft_map_error());
	*grid = mode == ARGV ? ft_split(ft_grid_str(av, fd)) : ft_split(av);
	if (!**grid)
		return (ft_map_error());
	if (!(params = ft_test_params(**grid)))
		return (ft_map_error());
	if (!ft_test_grid(*grid, params))
		return (ft_map_error());
	return (params);
}
