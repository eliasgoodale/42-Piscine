/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatthew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 13:55:37 by tmatthew          #+#    #+#             */
/*   Updated: 2018/01/31 16:50:24 by tmatthew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#	define FT_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 1023

typedef struct	s_map
{
	int			size;
	int			**table;
	int			column;
	int			row;
	char		empty;
	char		full;
	char		obstacle;
}				t_map;

typedef struct	s_print
{
  int			row;
  int			col;
  int			completed;
  int			b;
  int			status;
}				t_print_state;

t_map			*from_stdin(void);
t_map			*from_file(char *name, int index);
t_map			*parse_map(char *board);

t_print_state	*init_print_struct(void);

char			*ft_strcat(char *dest, char *src);

int				**initialize_table(int rows, int columns);
int				get_columns(char *str, t_map *map);
int				**parse_table(int	**table, char *str, t_map *map, int s);
int				ft_atoi(char *str);
int				ft_strlen(char *str);
int				bsq(t_map *map);
int				smallest(int **table, int row, int col);

void			print_position(t_map *map, t_print_state *s);
void			print_map(t_map *map);
void			free_table(int index, int **table);
void			_bsq(t_map *map);
void			parse_legend(t_map *map, char *str, int *first_line);
#endif
