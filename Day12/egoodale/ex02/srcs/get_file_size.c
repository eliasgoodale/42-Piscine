/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 22:19:56 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 22:38:11 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_file_size(char *mark)
{
	char 	c;
	int		fl_des;
	int		count;

	count = 0;
	fl_des = open(mark, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fl_des, &c, 1))
		count++;
	close(fl_des);
	return (count);
}
