/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 15:33:25 by sunkim            #+#    #+#             */
/*   Updated: 2018/01/14 15:33:26 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	initialize_board(int x, int y, char board[])
{
	int i;
	int k;

	i = 0;
	while (i < x)
	{
		k = 0;
		while (k < y)
		{
			board[i + k * x] = ' ';
			k++;
		}
		i++;
	}
}

void	check_board(int x, int y, char board[])
{
	int i;

	i = 0;
	while (i < x)
	{
		board[i] = 'B';
		board[i + (y - 1) * x] = 'B';
		i++;
	}
	i = 0;
	while (i < y)
	{
		board[0 + i * x] = 'B';
		board[(x - 1) + i * x] = 'B';
		i++;
	}
	board[(x - 1) + (y - 1) * x] = 'C';
	board[(x - 1)] = 'C';
	board[(y - 1) * x] = 'A';
	board[0] = 'A';
}

void	print_board(int x, int y, char board[])
{
	int i;
	int k;

	k = 0;
	while (k < y)
	{
		i = 0;
		while (i < x)
		{
			ft_putchar(board[i + k * x]);
			i++;
		}
		ft_putchar(10);
		k++;
	}
}

void	go_rush(int x, int y)
{
	char board[x * y];

	initialize_board(x, y, board);
	check_board(x, y, board);
	print_board(x, y, board);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		go_rush(x, y);
	}
}
