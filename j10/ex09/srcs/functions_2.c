/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:48:45 by nboute            #+#    #+#             */
/*   Updated: 2016/08/18 19:22:57 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_error(char c)
{
	if (c == '/')
		write(1, "Stop : division by zero\n", 24);
	else
		write(1, "Stop : modulo by zero\n", 22);
	return (1);
}

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	write(1, "error : only [ + - * / % ] are accepted.", 40);
	return (1);
}
