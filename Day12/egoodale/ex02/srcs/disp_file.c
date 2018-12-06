/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:27:39 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 23:23:29 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	disp_file(char **path, int fl_count, int sign, int cut)
{
	int		ret;
	int		i;
	char	*buf
	int		fl_des;
	int		tot_fl_size
	int 	read_size;

	i = 0;
	while (++i < fl_count)
	{
		tot_fl_size = get_file_size(path[i])
		buf = (char*)malloc((tot_fl_size + 1) * sizeof(char))
		fl_des = open(path[i], O_RDWR);
		if (fl_des == -1)
			ft_throw_err(path[i]);
		else
		{
		 ret = read(fl_des, buf, tot_fl_size)
			if(sign)
				write(1,&buf[cut],tot_fl_size - cut); 		
		 	else
				write(1,&buf[tot_fl_size - cut], cut);

			}
			close(fl_des);
		}
	}
}
