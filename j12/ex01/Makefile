# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 20:31:23 by nboute            #+#    #+#              #
#    Updated: 2016/08/17 23:08:05 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

CC=gcc

CFLAGS= -Wall -Wextra -Werror

SRC = srcs/ft_cat.c

OBJ = ft_cat.o

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
