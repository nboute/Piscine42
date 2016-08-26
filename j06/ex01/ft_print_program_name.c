/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 09:19:04 by nboute            #+#    #+#             */
/*   Updated: 2016/08/09 12:12:33 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc])
	{
		ft_putchar(argv[0][argc]);
		argc++;
	}
	ft_putchar('\n');
}
