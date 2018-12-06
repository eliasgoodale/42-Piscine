/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tag_shape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 17:12:55 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 12:33:12 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"

void		get_dimensions(char *input, int *width, int *height, int *total_len)
{
	int i;

	i = -1;
	while (input[++i] && input[i] != '\n')
		*width = i + 1;
	i = -1;
	while (input[++i])
	{
		*total_len += 1;
		if (input[i] == '\n')
			*height += 1;
	}
	check_corners(input, width, height, total_len);
	return ;
}
