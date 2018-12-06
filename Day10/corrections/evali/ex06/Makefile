#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 21:17:26 by egoodale          #+#    #+#              #
#    Updated: 2018/01/23 16:37:12 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LIBS = includes
SRCS = srcs/*.c 
OBJS = *.o
CFLAGS = -Wall -Werror -Wextra

all:
	gcc $(CFLAGS) -I$(LIBS) $(SRCS) -o do-op

clean:
	rm -f $(OBJS)
