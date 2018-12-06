/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:27:39 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/27 16:06:40 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	disp_file(char **path, int fl_count)
{
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];
	int		fl_des;

	i = 0;
	while (++i < fl_count)
	{
		if (path[i][0] == '-' && !path[i][1])
			cat_hang(&i);
		fl_des = open(path[i], O_RDWR);
		if (fl_des == -1)
			ft_throw_err(path[i]);
		else
		{
			while ((ret = read(fl_des, buf, BUF_SIZE)) && fl_des != -1)
			{
				buf[ret] = '\0';
				write(1, buf, ret);
			}
			close(fl_des);
		}
	}
}
