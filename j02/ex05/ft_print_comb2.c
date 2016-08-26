/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 16:32:26 by nboute            #+#    #+#             */
/*   Updated: 2016/08/06 19:48:28 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_aff_comb2(int numberone, int numbertwo)
{
	ft_putchar((numberone / 10) + 48);
	ft_putchar((numberone % 10) + 48);
	ft_putchar(' ');
	ft_putchar((numbertwo / 10) + 48);
	ft_putchar((numbertwo % 10) + 48);
	if (numberone != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int numberone;
	int numbertwo;

	numberone = 0;
	while (numberone < 99)
	{
		numbertwo = numberone + 1;
		while (numbertwo <= 99)
		{
			if (numberone != numbertwo)
			{
				ft_aff_comb2(numberone, numbertwo);
				numbertwo++;
			}
		}
		numberone++;
	}
}
