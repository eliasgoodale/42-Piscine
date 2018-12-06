/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:54:14 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 13:12:17 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void 	putnumber(char c)
{
	write (1, &c, 1);
}

void	number(int x)
{
	putnumber(x + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
	{
		f(tab[i]);
	}
}

int		main(void)
{
	int		*ptr;
	int		arr[] = {1,2,3,4,5};
	ptr = arr;
	ft_foreach(ptr, 5, &number);
	return (0);
}
