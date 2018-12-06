/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 10:57:27 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 20:07:00 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**initialize_table(int rows, int columns)
{
	int		row;
	int		col;
	int		**matrix;

	row = -1;
	matrix = (int**)malloc(sizeof(int*) * rows);
	while (++row< rows)
	{
		col = -1;
		matrix[row] = (int*)malloc(sizeof(int) * columns);
		while (++col < columns)
			matrix[row][col] = 0;
	}
	return (matrix);
}

t_map	*parse_map(char *board)
{
	t_map	*map;
	int		columns;
	char	*head;
	int		first_line;

	map = (t_map*)malloc(sizeof(*map));
	first_line = 0;
	columns = 0;
	head = board;
	if (!board || ft_strlen(board) < 6)
		return (0);
	parse_legend(map, board, &first_line);
	board += (first_line);
	if (*board != '\n')
		return (0);
	board += 1;
	if (!get_columns(board, map))
		return (0);
	map->table = parse_table(initialize_table(map->row,
				map->column + 2), head, map, 0);
	return (map);
}

void	parse_legend(t_map *map, char *str, int *first_line)
{
	int fl = 0;

	map->row = ft_atoi(str);
	while(str[fl] >= '0' && str[fl] <= '9')
		fl++;
	map->empty = str[fl];
	map->obstacle = str[fl + 1];
	map->full  = str[fl + 2];
	map->column = 0;
	map->size = 0;
	while (str[fl] != '\n')
		fl++;
	*first_line = fl;
	while (str[++fl] != '\n')
		map->size++; 


}

int		get_columns(char *str, t_map *map)
{
	int		row;
	int		column;
	char	current;

	row = 0;
	column = 0;
	str += 1;
	while (row < map->row)
	{
		while (str[column] && str[column] != '\n')
		{
			current = str[column];
			if (current != map->obstacle && current != map->empty)
				return (0);
			column += 1;
		}
		current = str[column];
		if (current && current != '\n')
			return (0);
		if (map->column && map->column != column)
			return (0);
		map->column = column;
		row += 1;
	}
	return (map->column > 0);
}

int		**parse_table(int	**table, char *str, t_map *map, int s)
{
	int		row;
	int		column;

	while (*str && *str != '\n')
		str += 1;
	str += 1;
	row = -1;
	while (str[s] && ++row < map->row)
	{

		column = -1;
		while (str[s] && ++column < map->column + 1)
		{
			if (str[s] == map->empty)
				table[column][row] = 1;
			else if (str[s] == map->obstacle || str[s] == '\n')
				table[column][row] = 0;
			s += 1;
		}
		if (s != ((map->column + 1) * (row + 1)))
			return (0);
	}
	return (table);
}
