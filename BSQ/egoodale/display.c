/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 12:55:31 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 21:51:07 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_print_state	*init_print_struct(void)
{
	t_print_state	*state;

	state = (t_print_state*)malloc(sizeof(t_print_state));
	state->row = -1;
	state->col = -1;
	state->completed = -1;
	state->b = -1;
	state->status = 1;
	return (state);
}

void	print_position(t_map *map, t_print_state *s)
{
	int i;

	i = 0;
	if (map->table[s->row][s->col] == 0)
		write(1, &(map->obstacle), 1);
	else if (s->status && map->table[s->row][s->col] == map->size)
	{
		i = -1;
		s->status = 0;
		s->b = s->col;
		while (++i < map->size)
			write(1, &(map->full), 1);
		s->col += map->size - 1;
	}
	else if (s->b != -1 && (s->col == s->b) && (s->completed < map->size))
	{
		i = -1;
		s->completed += 1;
		s->row = -1;
		s->status = 0;
		s->b = s->col;
		while (++i < map->size)
			write(1, &(map->full), 1);
		s->col += map->size - 1;
	}
	else
		write(1, &(map->empty), 1);
}

void	print_map(t_map *map)
{
	t_print_state	*state;

	state = init_print_struct();
	while(++(state->row) < map->row)
	{
		
		while(++(state->col) < map->column)
			print_position(map, state);
		write(1, "\n", 1);

		state->col = -1;
	}
}
