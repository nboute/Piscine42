/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_std_input.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:02:40 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:32:54 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_STD_INPUT_H
# define FT_READ_STD_INPUT_H

# include <unistd.h>
# include "ft_struct.h"
# include "main.h"
# include "ft_str_long.h"

t_str_list	*ft_create_strlist(char *str, int size);

char		*ft_fill_string(char *str, t_str_list *start);

char		*ft_read_std_input(t_str_list *start, char *buff, int cnt, int ret);

char		*ft_get_std_input(void);

#endif
