/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:51:15 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 01:08:45 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	int i;

	i = 1;
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		base /= 2;
	else
		base = (base * 3) + 1;
	i += ft_collatz_conjecture(base);
	return (i);
}
