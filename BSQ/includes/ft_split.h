/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 16:04:33 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:31:19 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

# include <stdlib.h>

int		ft_line_count(char *str);

int		*ft_line_len_tab(char *str, int line_count);

char	**ft_split(char *str);

#endif
