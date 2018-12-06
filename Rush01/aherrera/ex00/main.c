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

int isValid(int number, int puzzle[][9], int row, int column) {
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
					return (0);
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
					return (0);
	}
	return (1);
}


void		pr_sudoku(int puzzle[][9])
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				if (j > 0)
					write(1, " ", 1);
				a = puzzle[i][j] + 48;
				if (a < '0')
					a = -puzzle[i][j] + 48;
				write(1, &a, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		write(1,"\n",1);
}

int solve(int puzzle[][9], int row, int column) {
    int nextNum = 1;
    if (9 == row) {
        return(1);
    }
 
    /*
     * Is this element already set?  If so, we don't want to 
     * change it.  Recur immediately to the next cell.
     */
    if (puzzle[row][column]) {
        if (column == 8) {
            if (solve(puzzle, row+1, 0)) return 1;
        } else {
            if (solve(puzzle, row, column+1)) return 1;
        }
        return 0;
    }
      for (; nextNum<10; nextNum++) {
        if(isValid(nextNum, puzzle, row, column)) {
            puzzle[row][column] = nextNum;
            if (column == 8) {
                if (solve(puzzle, row+1, 0)) return 1;
            } else {
                if (solve(puzzle, row, column+1)) return 1;
            }
            puzzle[row][column] = 0;
        }
    }
    return (0);/* loop iteration from above */
}


int			main(int argc, char **argv)
{
	int	sudoku[9][9];
	int	i;
	int	j;
	int	error;
	int row = 0;
	int col = 0;

	error = 0;
	if (argc != 10)
		error = 1;
	j = -1;
	/*sudoku = (int **)malloc(9 * sizeof(int *));
	while (++j < 9)
		sudoku[j] = (int *)malloc(9 * sizeof(int));*/
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
	solve(sudoku, 0, 0);
	pr_sudoku(sudoku);
}
