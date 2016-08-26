/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_long.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 15:10:33 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 15:15:46 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_LONG_H
# define FT_STR_LONG_H

# include <stdlib.h>

char	*ft_str_longcat(char *dest, char *src, int dest_len, int src_len);

char	*ft_str_longdup(char *src, int src_len);

#endif
