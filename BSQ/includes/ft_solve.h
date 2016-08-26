/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 16:24:55 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:31:58 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVE_H
# define FT_SOLVE_H

# include <stdlib.h>
# include "ft_struct.h"
# include "ft_grid.h"

int		**ctab_to_itab(char **grid, char symbol, int line, int col);

int		ft_set_square_max(int **tab, int i, int j);

void	ft_fill_square(char **grid, int *max, char f);

int		*ft_set_values(int **tab, int xy[2], int *max);

void	ft_solve(char **grid, t_params *info);

#endif
