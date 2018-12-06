/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:51:12 by sunkim            #+#    #+#             */
/*   Updated: 2018/01/29 00:04:41 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);
void	initialize_board(int x, int y, char board[]);
void	check_board(int x, int y, char board[]);
void	print_board(int x, int y, char board[]);
void	go_rush(int x, int y);
void	rush(int x, int y);

int		main(void)
{
	rush(20, 20);
	return (0);
}
