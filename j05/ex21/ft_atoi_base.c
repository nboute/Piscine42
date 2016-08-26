/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:12:50 by nboute            #+#    #+#             */
/*   Updated: 2016/08/25 11:33:59 by nboute           ###   ########.fr       */
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



char	*ft_format_str_base(char *str, char *base)
{
	int i;
	int j;
	int pos;
	int neg;

	i = 0;
	pos = 0;
	neg = 1;
	if (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' 
				|| str[i] == '\v' || str[i] == '\r' 
				|| str[i] == '\f') && str[i])
			i++;
		if (str[i] == '-')
			neg = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i])
		{
			
		}
	}

}

int		ft_atoi_base(char *str, char *base)
{
}
