/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_throw_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:52:12 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 21:28:50 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_throw_err(char *mark)
{
	int i;

	i = -1;
	write(2, "cat: ", 5);
	while (mark[++i])
		write(2, &mark[i], 1);
	if (errno == 2)
		write(2, ": No such file or directory\n", 28);
	else if (errno == 13)
		write(2, ": Permission denied\n", 20);
	else if (errno == 21)
		write(2, ": Is a directory\n", 17);
}
