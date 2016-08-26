/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 16:04:31 by nboute            #+#    #+#             */
/*   Updated: 2016/08/05 14:07:35 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char numbers[3];

	numbers[2] = 50;
	numbers[1] = 49;
	numbers[0] = 48;
	while (numbers[0] <= 55)
	{
		if (numbers[0] < numbers[1] < numbers[2])
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if ((numbers[0] < 55) || (numbers[1] < 56) || (numbers[2] < 57))
				ft_putchar(',');
			if ((numbers[0] < 55) || (numbers[1] < 56) || (numbers[2] < 57))
				ft_putchar(' ');
		}
		if (++numbers[2] == 58)
			numbers[2] = ++numbers[1] + 1;
		if (numbers[1] == 57)
		{
			numbers[1] = ++numbers[0] + 1;
			numbers[2] = numbers[1] + 1;
		}
	}
}
