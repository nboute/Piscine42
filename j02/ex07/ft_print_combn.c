/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 23:55:21 by nboute            #+#    #+#             */
/*   Updated: 2016/08/08 12:04:57 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_res(int tab[10], int n)
{
	int i;
	int islower;

	i = 0;
	islower = 0;
	while (i < n - 1)
	{
		if (tab[i] >= tab[i + 1] || tab[i] > 10 - n + i)
			islower = 1;
		i++;
	}
	if (islower != 1)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + 48);
		if (tab[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_ordertab(int tab[10], int n, int i)
{
	int j;

	if (n >= i && tab[n - 1] == 10)
	{
		j = n - i;
		while (j < n)
		{
			if (j == 0)
				return ;
			if (tab[n - j] == 10 - j + 1)
				tab[n - j - 1]++;
			j++;
		}
		j = 1;
		while (j <= i)
		{
			if (tab[j] == 10 - n + j + 1)
				tab[j] = tab[j - 1] + 1;
			j++;
		}
	}
}

void	ft_ncomb(int tab[10], int n)
{
	int i;

	while (tab[0] <= 10 - n + 1)
	{
		i = 1;
		while (i <= n)
		{
			ft_ordertab(tab, n, i);
			i++;
		}
		ft_print_res(tab, n);
		if (tab[n - 1] < 10)
			tab[n - 1]++;
	}
}

void	ft_print_combn(int n)
{
	int tab[10];
	int i;

	if (n > 0 && n < 10)
	{
		i = 0;
		if (n == 1)
			while (i < 10)
			{
				ft_putchar(i++ + 48);
				if (i < 10)
					ft_putchar(',');
				if (i < 10)
					ft_putchar(' ');
			}
		else
		{
			while (i < n)
			{
				tab[i] = i;
				i++;
			}
			ft_ncomb(tab, n);
		}
	}
}
