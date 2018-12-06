/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:59:54 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/27 16:32:08 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int 	ret;
	if (argc == 1)
		while ((ret = read(0, buf, BUF_SIZE)))
		
	printf("%s", buf);	
	disp_file(argv, argc);
	return (0);
}
