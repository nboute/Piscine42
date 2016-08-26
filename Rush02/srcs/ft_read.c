/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbossard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 11:15:01 by cbossard          #+#    #+#             */
/*   Updated: 2016/08/20 16:55:15 by cbossard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colle_2.h"

char	*ft_realloc(char *str, char *to_add)
{
	int		i;
	int		j;
	char	*new;

	i = ft_strlen(str);
	j = ft_strlen(to_add);
	new = (char*)malloc(sizeof(char) * (i + j) + 1);
	if (!new)
		return (0);
	new[i + j] = 0;
	i = 0;
	j = 0;
	while (str && str[i])
		new[j++] = str[i++];
	i = 0;
	while (to_add && to_add[i])
		new[j++] = to_add[i++];
	if (str)
		free(str);
	return (new);
}

void	ft_clearbuff(char *buff)
{
	int		i;

	i = 0;
	while (i <= 16)
		buff[i++] = 0;
}

char	*ft_read(void)
{
	char	*result;
	char	*buff;

	result = 0;
	buff = (char*)malloc(sizeof(char) * 17);
	if (!buff)
		return (0);
	ft_clearbuff(buff);
	while (0 < read(0, buff, 16))
	{
		result = ft_realloc(result, buff);
		ft_clearbuff(buff);
	}
	return (result);
}
