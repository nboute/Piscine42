/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:08:07 by nboute            #+#    #+#             */
/*   Updated: 2016/08/18 23:22:26 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_HEADER_H

# define _FT_HEADER_H

# include <unistd.h>

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_error(char c);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);

typedef struct	s_opp
{
	char		*c;
	int			(*fct) (int, int);
}				t_opp;

#endif
