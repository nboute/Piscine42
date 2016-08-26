/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:07:28 by nboute            #+#    #+#             */
/*   Updated: 2016/08/08 17:03:52 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprime(int nb)
{
	int div;

	div = 3;
	if (nb <= 1 || nb % 2 == 0)
		return (-1);
	if (nb == 2)
		return (-1);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (-1);
		div += 2;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_isprime(nb))
	{
		nb += 2;
	}
	return (nb);
}
