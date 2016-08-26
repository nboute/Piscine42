/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:18:08 by nboute            #+#    #+#             */
/*   Updated: 2016/08/20 16:00:59 by cbossard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void			ft_tab_colle00(int a, int b, char *tab);
void			ft_tab_colle01(int a, int b, char *tab);
void			ft_tab_colle02(int a, int b, char *tab);
void			ft_tab_colle03(int a, int b, char *tab);
void			ft_tab_colle04(int a, int b, char *tab);
char			*ft_read(void);
int				ft_nbr_col(char *str);
int				ft_line_len(char *str);
typedef struct	s_colle
{
	char	c;
	void	(*colle)(int, int, char *);
}				t_colle;
#endif
