/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 10:41:22 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 18:06:45 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <string.h>
#include <stdio.h>
t_map	*from_stdin(void)
{
	char	*board;
	int		bytes_read;
	char	buffer[BUF_SIZE + 1];
	int		i;
	char	*tmp;
	
	i = 1;
	tmp = 0;
	board = 0;
	while ((bytes_read = read(0, buffer, BUF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		board = (char*)malloc(sizeof(char) * ((BUF_SIZE + 1) * i));
		if (!board)
			return (0);
		ft_strcat(board, tmp);
		ft_strcat(board, buffer);
		tmp = board;
		i += 1;
	}
	return (parse_map(board));
}

t_map	*from_file(char *name, int index)
{
	int		file;
	char	*board;
	int		bytes_read;
	char	buffer[BUF_SIZE + 1];
	char	*tmp;
	
	tmp = 0;
	board = 0;
	file = open(name, O_RDONLY);
	if (file == -1)
		return (0);
	while ((bytes_read = read(file, buffer, BUF_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		tmp = board;
		board = (char*)malloc(sizeof(char) * ((BUF_SIZE + 1) * index));
		if (!board)
			return (0);
		ft_strcat(board, tmp);
		ft_strcat(board, buffer);
		index += 1;
	}
	close(file);
	return (parse_map(board));
}
