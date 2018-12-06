/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:07:07 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 10:18:31 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char glyph)
{
	write(1,&glyph,1);
}

void	ft_print_reverse_alphabet(void)
{
	char start;

	start = 'z';
	while (start > 'a' - 1)
	{
		ft_putchar(start);
		start -= 1;
	}
}

int main()
{
	ft_();
	return(0);
}
