/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:04:51 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 22:09:25 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;
	t_list	*elem;

	begin_list = 0;
	if (ac >= 1)
	{
		elem = ft_create_elem(av[ac - 1]);
		begin_list = elem;
		i = 2;
		while (i <= ac)
		{
			elem->next = ft_create_elem(av[ac - i]);
			elem = elem->next;
			i++;
		}
	}
	return (begin_list);
}
