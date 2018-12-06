/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 22:07:32 by aherrera          #+#    #+#             */
/*   Updated: 2018/01/21 22:10:19 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int			ch_block(int **sudoku, int i, int j, int aux)
{
	int		a;
	int		b;

	a = (i / 3) * 3 - 1;
	while (++a < (i / 3) * 3 + 3)
	{
		b = (j / 3) * 3 - 1;
		while (++b < (j / 3) * 3 + 3)
			if ((aux == sudoku[a][b] || aux == -1 * sudoku[a][b])
					&& sudoku[a][b] != 0)
				if (a != i && b != j)
					return (1);
	}
	a = -1;
	while (++a < 9)
	{
		b = -1;
		while (++b < 9)
			if (a != i && b != j && sudoku[a][b] != 0)
				if (sudoku[i][j] == sudoku[i][b]
			|| sudoku[i][j] == sudoku[a][j] || sudoku[i][j] == -1 * sudoku[a][j]
					|| sudoku[i][j] == -1 * sudoku[i][b])
					return (1);
	}
	return (0);
}

void		pr_sudoku(int **sudoku, int error)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	if (error == 0)
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				if (j > 0)
					write(1, " ", 1);
				a = sudoku[i][j] + 48;
				if (a < '0')
					a = -sudoku[i][j] + 48;
				write(1, &a, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	else
		write(1, "Error\n", 6);
}

int			solve(int **sudoku, int i, int j, int k)
{
	sudoku[i][j] = k;
	if (ch_block(sudoku, i, j, sudoku[i][j]) == 1)
		return (0);
	j++;
	if (j == 9)
	{
		j = 0;
		i++;
	}
	k = 1;
	if (sudoku[i][j] >= 0 && i < 9)
		while (k < 10 && solve(sudoku, i, j, k) == 0)
			k++;
	else if (i < 9)
		return (solve(sudoku, i, j, sudoku[i][j]));
	if (k == 10 && i < 9)
	{
		sudoku[i][j] = 0;
		return (0);
	}
	return (1);
}

void		solve_start(int **sudoku, int error)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (sudoku[i][j] != 0)
	{
		j++;
		if (j == 9)
		{
			i++;
			j = 0;
		}
	}
	k = 1;
	while (k < 10 && solve(sudoku, i, j, k) == 0)
		k++;
	if (k == 10)
		pr_sudoku(sudoku, 0);
}

int			main(int argc, char **argv)
{
	int	**sudoku;
	int	i;
	int	j;
	int	error;

	error = 0;
	if (argc != 10)
		error = 1;
	j = -1;
	sudoku = (int **)malloc(9 * sizeof(int *));
	while (++j < 9)
		sudoku[j] = (int *)malloc(9 * sizeof(int));
	i = 0;
	while (++i < 10 && error == 0)
	{
		j = -1;
		while (++j < 9)
			if (argv[i][j] == '.')
				sudoku[i - 1][j] = 0;
			else if (argv[i][j] >= '0' && argv[i][j] <= '9')
				sudoku[i - 1][j] = -1 * (argv[i][j] - '0');
			else
				error = 1;
	}
	solve_start(sudoku, error);
}
