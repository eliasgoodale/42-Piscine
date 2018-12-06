/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 22:00:03 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/14 23:07:06 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		top_len(int size, int fl_num)
{
	int		star_increase;
	int		i;

	if (fl_num == size)
		return (1);
	star_increase = 4;
	i = fl_num;
	while (i <= size)
	{
		if ((fl_num % 2 == 0) && (i % 2 == 1))
			star_increase += 4;
		else if (fl_num % 2 == 0)
			star_increase += 2;
		else if (fl_num % 2 == 1 && (i % 2 == 1))
			star_increase += 2;
		else
			star_increase += 4;
		i++;
	}
	return (top_len(size, fl_num + 1) + star_increase);
}

void	print_line(int print_len, int spaces, int door_s, int door_k)
{
	int		total_line_length;
	int		door_width;

	total_line_length = print_len;
	door_width = door_s;
	while (--spaces >= 0)
		ft_putchar(' ');
	ft_putchar('/');
	if (door_s == 0)
		while (--print_len >= 0)
			ft_putchar('*');
	else
	{
		while (--print_len >= ((total_line_length - door_s) / 2 + door_s))
			ft_putchar('*');
		while (--door_width >= 0)
			if (door_k && door_s > 3 && door_width == 1)
				ft_putchar('$');
			else
				ft_putchar('|');
		while (--print_len >= door_s - 1)
			ft_putchar('*');
	}
	ft_putchar(92);
	ft_putchar('\n');
}

void	last_fl(int size, int fl_num, int lines, int print_len)
{
	int		spaces;
	int		base_spaces;
	int		door_s;

	base_spaces = ((top_len(size, 1) - top_len(size, fl_num)) / 2);
	door_s = size;
	if (size % 2 == 0)
		door_s--;
	while (--lines > 0)
	{
		spaces = base_spaces + lines + fl_num - 2;
		if (lines > door_s)
			print_line(print_len, spaces, 0, 0);
		else
		{
			if ((door_s / 2) == (door_s - lines))
				print_line(print_len, spaces, door_s, 1);
			else
				print_line(print_len, spaces, door_s, 0);
		}
		print_len += 2;
	}
}

void	print_floor(int size, int fl_num)
{
	int		spaces;
	int		print_len;
	int		base_spaces;
	int		lines;

	print_len = top_len(size, fl_num);
	lines = 3 + (size - fl_num);
	base_spaces = ((top_len(size, 1) - top_len(size, fl_num)) / 2);
	while (lines > 0)
	{
		spaces = base_spaces + lines + fl_num - 2;
		print_line(print_len, spaces, 0, 0);
		lines--;
		print_len += 2;
	}
}

void	sastantua(int size)
{
	int		fl_num;
	int		lines;
	int		print_len;

	if (size < 1)
	{
		return ;
	}
	fl_num = size;
	while (fl_num > 1)
	{
		print_floor(size, fl_num);
		fl_num--;
	}
	lines = 4 + (size - fl_num);
	print_len = top_len(size, fl_num);
	last_fl(size, fl_num, lines, print_len);
}
