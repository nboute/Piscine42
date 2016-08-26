/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 12:16:30 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 18:29:04 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_error(int a, char *filename)
{
	if (a == 1)
	{
		ft_putstr("tail: ");
		ft_putstr(filename);
		ft_putstr(": no such file or directory");
	}
	return (0);
}

int		ft_get_file_size(char *filename)
{
	char buf[1];
	int size;
	int fd;

	size = 0;
	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		return (0);
	while (read(fd, buf, 1))
		size++;
	close(fd);
	return (size);
}

int		ft_affichage_tail(char *av, int octets)
{
	int size;
	char buf[2];
	int fd;

	buf[0] = 0;
	buf[1] = '\0';
	size = ft_get_file_size(av);
	fd = open(av, O_RDONLY);
	if (fd <= 0)
		return (ft_error(1, av));
	if (octets)
	{
		while (read(fd, buf, 1))
		{
			buf[1] = '\0';
			if (size <= octets)
				ft_putchar(buf[0]);
			size--;
		}
	}
	close(fd);
	return (0);
}

void	ft_aff_filename(char *filename)
{
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
}

int	ft_read(char *filename, int octets)
{
	int fd;
	int size;
	char buff[2];

	fd = open(filename, O_RDONLY);
	if (fd > 0)
		ft_aff_filename(filename);
	else
	{
		return (ft_error(1, filename));
		ft_putchar('\n');
	}
		size = ft_get_file_size(filename); 
		while (read(fd, buff, 1))
		{
			buff[1] = '\0';
			if (size <= octets)
				ft_putchar(buff[0]);
			size--;
		}
		close(fd);
		return (0);
}

int		main(int ac, char **av)
{
	int i;
	int octets;

	if (ac <= 3)
		return (0);
	else
	{
		i = 3;
		if (ft_strcmp(av[1], "-c"))
			return (0);
		if (ft_str_is_numeric(av[2]))
			octets = ft_atoi(av[2]);
		else
			return (ft_error(1, av[2]));
		if (ac == 4)
			return (ft_affichage_tail(av[3], octets));
		else if (octets)
			while (i < ac)
			{
				ft_read(av[i], octets);
				if (++i < ac)
					ft_putchar('\n');
			}
	}
	return (0);
}
