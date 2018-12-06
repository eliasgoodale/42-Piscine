/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:27:21 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/27 17:59:24 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "rush_two.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1023

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar(8 + '0');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr((nb / 10));
		ft_putchar((nb % 10) + '0');
	}
}

void	print_results(int rush, int width, int height)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putstr("]");
}

void print_rush(int *res, int *width, int *height)
{
	if(*res < 6)
		print_results(*res, *width, *height);
	else if (*res == 6 || *res == 7 )
	{ //prints out 2,
		print_results(*res - 4, *width, *height);
		write(1, "||", 2);		
		print_results(*res - (*res-4), *width, *height);
	}
	else//print out 2,3,4
	{
		print_results(2, *width, *height);
		write(1, "||", 2);
		print_results(3, *width, *height);
		write(1, "||", 2);
		print_results(4, *width, *height);
	}
}

void check_corners(char *input, int *width, int *height, int *total_len)	
{

	int result;

	if (input[0] == 'o')	
		result = 0;
	else if (input[0] == '/')
		result = 1;
	else if (input[0] == 'A') 						
	{
		if(*height == 1 && *width == 1)
			result = 9;														//	prints out 2,3, and 4 	(9)
		else if(*height == 1 && input[*width] == 'C')
			result = 7;
		else if(*width == 1 && input[*total_len - *width] == 'C')
			result = 6;
		else if(input[0] == input[*total_len])
			result = 4;	
		else if(input[0] == input[*total_len - *width])
			result = 3;
		else if(input[0] == input[*width])
			result = 2;															//	prints out 3 and 													// {abbba}, {cbbbc} returns 2
	}	
	print_rush(&result, width, height);
}


void		get_dimensions(char *input, int *width, int *height, int *total_len)
{
	int i;

	i = -1;
	while(input[++i] && input[i] != '\n')
		*width = i;
	i = -1;
	while(input[++i])
	{
		*total_len += 1;
		if(input[i] == '\n')
			*height += 1;
	}
	check_corners(input, width, height, total_len);
}

int main ()
{
	
	int total_len;
	char buf[BUF_SIZE + 1];
	int height = 0;
	int width = 0;
	int ret;

	while((ret = read(0, buf, BUF_SIZE)))
		buf[ret] = '\0';
	get_dimensions(buf, &width, &height, &total_len );
	printf("width %d height %d total string length %d",width, height, total_len);
			
}	
