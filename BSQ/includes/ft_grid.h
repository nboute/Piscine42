/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:43:27 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 21:39:58 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GRID_H
# define FT_GRID_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "main.h"
# include "ft_str_long.h"
# include "ft_str_basics.h"

int		ft_grid_size(int fd);

char	*ft_grid_str(char *av, int fd);

void	ft_print_grid(char **grid, int col);

#endif
