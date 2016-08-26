/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:07:34 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 17:50:16 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_long.h"

char	*ft_str_longcat(char *dest, char *src, int dest_len, int src_len)
{
	long	*lptr_dest;
	long	*lptr_src;
	char	*cptr_dest;
	char	*cptr_src;

	lptr_dest = (long*)(dest + dest_len);
	lptr_src = (long*)src;
	while ((unsigned long)src_len >= sizeof(long))
	{
		*lptr_dest++ = *lptr_src++;
		src_len -= sizeof(long);
	}
	cptr_dest = (char*)lptr_dest;
	cptr_src = (char*)lptr_src;
	while (src_len > 0)
	{
		*cptr_dest++ = *cptr_src++;
		src_len--;
	}
	*cptr_dest = '\0';
	return (dest);
}

char	*ft_str_longdup(char *src, int src_len)
{
	char	*str;
	long	*lsrc;
	long	*lcpy;
	char	*csrc;
	char	*ccpy;

	str = malloc(sizeof(*str) * (src_len + 1));
	lsrc = (long*)src;
	lcpy = (long*)str;
	while ((unsigned long)src_len >= sizeof(long))
	{
		*lcpy++ = *lsrc++;
		src_len -= sizeof(long);
	}
	csrc = (char*)lsrc;
	ccpy = (char*)lcpy;
	while (src_len > 0)
	{
		*ccpy++ = *csrc++;
		src_len--;
	}
	*ccpy = '\0';
	return (str);
}
