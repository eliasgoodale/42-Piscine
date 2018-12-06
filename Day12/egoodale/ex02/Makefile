# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 15:14:36 by egoodale          #+#    #+#              #
#    Updated: 2018/01/25 21:47:34 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
LIBS = includes
SRCS = srcs/*.c
OBJS = *.o

CFLAGS = -Wall -Werror -Wextra

all:
	gcc $(CFLAGS) -I$(LIBS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
