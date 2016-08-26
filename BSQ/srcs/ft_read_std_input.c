/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_std_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:03:47 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:12:34 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_std_input.h"

t_str_list	*ft_create_strlist(char *str, int size)
{
	t_str_list *list;

	list = 0;
	if (!(list = (t_str_list*)malloc(sizeof(t_str_list))))
		return (0);
	list->next = 0;
	list->size = size;
	list->str = ft_str_longdup(str, size);
	return (list);
}

char		*ft_fill_string(char *str, t_str_list *start)
{
	int i;

	i = 0;
	while (start)
	{
		ft_str_longcat(str, start->str, (BUFF_SIZE * i), start->size);
		start = start->next;
		i++;
	}
	return (str);
}

char		*ft_read_std_input(t_str_list *start, char *buff, int cnt, int ret)
{
	char		*str;
	t_str_list	*list;

	list = 0;
	while ((ret = read(0, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!list)
		{
			list = ft_create_strlist(buff, ret);
			start = list;
		}
		else
		{
			list->next = ft_create_strlist(buff, ret);
			list = list->next;
		}
		cnt++;
	}
	str = 0;
	if ((str = (char*)malloc(sizeof(char) * (cnt * BUFF_SIZE) + 1)) == 0)
		return (0);
	return (ft_fill_string(str, start));
}

char		*ft_get_std_input(void)
{
	t_str_list	*start;
	char		*buff;
	int			ret;
	int			cnt;

	buff = 0;
	cnt = 0;
	start = 0;
	ret = 0;
	if (!(buff = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (0);
	return (ft_read_std_input(start, buff, cnt, ret));
}
