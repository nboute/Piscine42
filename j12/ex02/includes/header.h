/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:44:59 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 19:01:10 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_str_is_numeric(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_error(int a, char *filename);

#endif
