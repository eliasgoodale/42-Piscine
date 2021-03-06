/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_two.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:32:07 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 02:56:50 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef RUSH_TWO_H
#	define RUSH_TWO_H

#define BUF_SIZE 1023

#include <unistd.h>
#include <fcntl.h>

void	get_dimensions(char *input, int *width, int *height, int  *total_len);

void	check_corners(char *input, int *width, int *height, int *total_len);

void	print_rush(int *result, int *width, int *height);

void	print_results(int rush, int width, int height);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nbr);

#endif
