/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:56:20 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/17 18:10:01 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	j = 0;
	(void)argc;
	while (argv[0][j])
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
