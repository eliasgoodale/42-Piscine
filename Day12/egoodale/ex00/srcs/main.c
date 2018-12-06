/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 12:03:33 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 21:46:10 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1

int		ft_throw_err(int ac)
{
	if (ac < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	else if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	else
		return (ac);
}

int		main(int argc, char **argv)
{
	int		fl_des;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	if (ft_throw_err(argc) == 0)
		return (0);
	fl_des = open(argv[1], O_RDONLY);
	if (fl_des == -1)
		return (0);
	while ((ret = read(fl_des, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		write(1, buffer, ret);
	}
	close(fl_des);
}
