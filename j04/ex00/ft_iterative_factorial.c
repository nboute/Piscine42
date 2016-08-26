/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:37:39 by nboute            #+#    #+#             */
/*   Updated: 2016/08/04 16:47:58 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (nb > 1)
	{
		res = res * --nb;
	}
	return (res);
}
