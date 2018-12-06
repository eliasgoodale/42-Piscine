/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 13:05:40 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/01 16:27:13 by egoodale         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int 	open_brack(int i, char *byte, char *op)
{
	int found;
	
	found = 1;
	if (*byte == 0)
	{
		i++;
		while (found)
		{
			if(op[i] == '[')
				found++;
			if (op[i] == ']')
				found--;
			i++;
		}
	}
	return (i);
}

int 	close_brack(int i, char *byte, char *op)
{
	int found;
	
	found = 1;
	if (*byte != 0)
	{
		i--;
		while (found)
		{
			if(op[i] == ']')
				found++;
			if (op[i] == '[')
				found--;
			i--;
		}
	}
	return (i);
}

void	op_parser(char *byte, char *op)
{
	int i;

	i = 0;
	while (op[i])
	{
		if(op[i] == '>')
			byte++;
		else if (op[i] == '<')
			byte--;
		else if (op[i] == '+')
			(*byte)++;
		else if (op[i] == '-')
			(*byte)--;
		else if (op[i] == '.')
			write(1, byte, 1);
		else if (op[i] == ']')
			i = close_brack(i, byte, op);
		else if (op[i] == '[')
			i = open_brack(i, byte, op);
		i++;
	}
}

void	init(char *op)
{
	char *byte;

	byte = (char*)malloc(5);
	op_parser(byte, op);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		init(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}































