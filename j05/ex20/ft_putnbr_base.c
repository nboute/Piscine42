/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:12:50 by nboute            #+#    #+#             */
/*   Updated: 2016/08/10 18:00:09 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[++j])
			if (base[i] == base[j])
				return (1);
		i++;
	}
	if (i == 0 || i == 1)
		return (1);
	return (0);
}

void	ft_print_nbr(int nbr, char *base)
{
	ft_putchar(base[nbr]);
}

int		ft_isnegative(int nbr, char *base)
{
	ft_putchar('-');
	if (nbr == -2147483648)
	{
		ft_print_nbr(2, base);
		return (147483648);
	}
	else
		return (nbr * -1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int baseint;

	baseint = 0;
	if (ft_check_base(base))
		return ;
	while (base[baseint])
		baseint++;
	if (nbr < 0)
		nbr = ft_isnegative(nbr, base);
	if (nbr >= baseint)
	{
		ft_putnbr_base(nbr / baseint, base);
		ft_putnbr_base(nbr % baseint, base);
	}
	else
	{
		ft_print_nbr(nbr, base);
	}
}
