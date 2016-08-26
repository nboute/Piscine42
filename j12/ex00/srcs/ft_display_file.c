/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:31:29 by nboute            #+#    #+#             */
/*   Updated: 2016/08/17 22:58:10 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_errors(int i)
{
	if (i == 1)
		ft_putstr("File name missing\n");
	else if (i >= 3)
		ft_putstr("Too many arguments.\n");
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;
	int ret;
	char buf[11];

	if (argc != 2)
		return ft_errors(argc);
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, 10)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}
