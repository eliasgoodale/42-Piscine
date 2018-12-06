/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 22:35:39 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/02 00:02:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void putnbr_hex(int nb, int rem)
{

	const char *base = "0123456789abcdef";
	if(nb >=  10000000)
	{
			putnbr_hex((nb >> 4 ), (nb % 16));
			write(1, base + (nb % 16) , 1);	

	}
	else
	{
		rem = nb % 16;
		if (rem > 0)
			putnbr_hex(nb >> 4, rem - 1);
		write(1, base + (nb % 16), 1);
	}
}

int main(int argc, char **argv)
{
	putnbr_hex(atoi(argv[1]), 0);
}
