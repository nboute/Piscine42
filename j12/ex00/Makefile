# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 20:31:23 by nboute            #+#    #+#              #
#    Updated: 2016/08/17 22:47:38 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC=gcc

CFLAGS= -Wall -Wextra -Werror

SRC = srcs/ft_display_file.c

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
