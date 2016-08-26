/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_basics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 21:59:23 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/25 13:57:41 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_basics.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int		ft_atoi_pos(char *str)
{
	int conv;

	conv = 0;
	while (*str >= '0' && *str <= '9')
	{
		conv *= 10;
		conv += *str - '0';
		str++;
	}
	if (*str != '\0')
		return (0);
	return (conv);
}

void	*ft_map_error(void)
{
	ft_putstr("map error\n");
	return (0);
}
