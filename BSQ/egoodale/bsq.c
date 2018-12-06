/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 11:31:41 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 21:22:00 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		bsq(t_map *map)
{
	if (!map->table)
		return (0);
	_bsq(map);
	print_map(map);
	return (1);
}


void	free_table(int index, int **table)
{
	while (index >= 0)
	{
		free(table[index]);
		index -= 1;
	}
	free(table);
}

int		smallest(int **table, int row, int col)
{
	int		cmp;
	int		next_right;
	int		next_bottom;
	int		next_bottom_right;

	next_right = table[row][col + 1];
	next_bottom = table[row + 1][col];
	next_bottom_right = table[row + 1][col + 1];
	cmp = next_right <  next_bottom ? next_right : next_bottom;
	return (1 + (cmp <  next_bottom_right ? cmp : next_bottom_right));
}

void	_bsq(t_map *map)
{
	int		row;
	int		col;
	int		size;
	int		next_pos;

	size = 0;
	row = map->row - 1;
	col= map->column;
	while (--row >= 0)
	{
		while (--col>= 0)
		{
			if (map->table[row][col])
			{
				next_pos = smallest(map->table, row, col);
				if ((map->table[row][col] = next_pos) > size)
					size = next_pos;
			}
		}
		col = map->column;
	}
	map->size = size;
}
