/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 09:06:53 by nboute            #+#    #+#             */
/*   Updated: 2016/08/17 11:55:21 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_cat_str(char *dest, char *src, int destlen)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	return (destlen);
}

char	*ft_concat_params(int argc, char **argv)
{
	unsigned int	size;
	int				i;
	int				strlen;
	char			*str;

	size = 0;
	i = 1;
	while (i < argc)
		size += (ft_strlen(argv[i++]));
	str = malloc(sizeof(char*) * (size + 1));
	if (!str)
		return (0);
	i = 1;
	strlen = 0;
	while (argv[i])
	{
		strlen = ft_cat_str(str, argv[i], strlen);
		if (argv[i++ + 1])
			str[strlen++] = '\n';
	}
	str[strlen] = '\0';
	return (str);
}
