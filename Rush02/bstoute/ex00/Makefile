# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 15:14:36 by egoodale          #+#    #+#              #
#    Updated: 2018/01/27 17:45:41 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush_02
LIBS = include
SRCS = src/*.c
OBJS = *.o

CFLAGS = -Wall -Werror -Wextra

all:
	gcc $(CFLAGS) -I$(LIBS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
