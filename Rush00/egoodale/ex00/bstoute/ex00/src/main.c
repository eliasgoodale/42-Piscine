/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:27:21 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 20:40:25 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int			main(void)
{
	int		*total_len;
	char	*buf;
	int		*height;
	int		*width;
	int		ret;

	buf = (char *)malloc((BUF_SIZE + 1) * sizeof(char));
	height = (int *)malloc(sizeof(int));
	total_len = (int *)malloc(sizeof(int));
	width = (int *)malloc(sizeof(int));
	*height = 0;
	*width = 0;
	*total_len = 0;
	while ((ret = read(0, buf, BUF_SIZE)))
		buf[ret] = '\0';
	if (valid_rush(buf) == 0)
		write(1, "error\n", 6);
	else
		get_dimensions(buf, width, height, total_len);
	free(buf);
	free(height);
	free(total_len);
	free(width);
	return (0);
}
