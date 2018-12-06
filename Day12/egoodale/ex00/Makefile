#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 21:17:26 by egoodale          #+#    #+#              #
#    Updated: 2018/01/25 21:47:51 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file
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
