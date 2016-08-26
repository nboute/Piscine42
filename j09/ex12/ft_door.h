/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:32:28 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 13:52:25 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H

# define OPEN 0

# define CLOSE 1

# define EXIT_SUCCESS 0

# include <unistd.h>

typedef int		t_bool;

typedef struct	s_door
{
	int state;
}				t_door;

void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
