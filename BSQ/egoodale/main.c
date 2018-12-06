/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 10:35:23 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 15:26:11 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	error()
{
	write(2, "map error\n", 10);
}

int		main(int argc, char **argv)
{
	int		index;
	t_map	*map;

	if (argc <= 1)
	{
		map = from_stdin();
		if (!map || !bsq(map))
			error();
		else
			write(1, "\n", 1);
		return (0);
	}
	index = 0;
	while (++index < argc)
	{
		map = from_file(argv[index], 1);
		if (!map || !bsq(map))
			error();
		else
			write(1, "\n", 1);
	}
	return (0);
}
