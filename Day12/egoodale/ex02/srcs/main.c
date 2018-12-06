/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:59:54 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 21:30:59 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		while ((read(0, buf, 1)))
			write(1, buf, 1);
	disp_file(argv, argc);
	return (0);
}
