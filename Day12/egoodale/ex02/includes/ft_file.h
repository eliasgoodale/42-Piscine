/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:32:00 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/25 21:36:12 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_FILE_H
#	define FT_FILE_H

#include <unistd.h>

#include <fcntl.h>

#include <errno.h>

#define BUF_SIZE 1

void	disp_file(char **av, int ac);

void	ft_throw_err(char *mark);

#	endif
