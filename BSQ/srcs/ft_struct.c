/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 20:49:38 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:04:36 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

t_params	*ft_params_def(void)
{
	t_params	*params;

	params = (t_params*)malloc(sizeof(t_params));
	params->line = 0;
	params->col = 0;
	params->empty = 0;
	params->obst = 0;
	params->full = 0;
	return (params);
}
