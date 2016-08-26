/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:18:30 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 17:18:03 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEST_H
# define FT_TEST_H

# include "ft_struct.h"
# include "ft_grid.h"
# include "ft_split.h"
# include "ft_str_basics.h"

t_params	*ft_test_params(char *line_0);

int			ft_valid_line(char *line, t_params par);

int			ft_test_grid(char **grid, t_params *params);

t_params	*ft_test(char *av, char ***grid, int mode);

#endif
