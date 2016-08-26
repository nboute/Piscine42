/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:47:45 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:14:03 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

# include <stdlib.h>

typedef struct	s_params
{
	int		line;
	int		col;
	char	empty;
	char	obst;
	char	full;
}				t_params;

typedef struct	s_str_list
{
	struct s_str_list	*next;
	char				*str;
	int					size;
}				t_str_list;

t_params		*ft_params_def(void);

#endif
