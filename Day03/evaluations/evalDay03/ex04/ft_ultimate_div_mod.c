/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:45:55 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/12 15:59:51 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	if(*b == 0)
	{
		return
	}
	else
	{
	int tmp_a;
	int tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
	}
}

int main()
{
	int *a;
	int *b;

	int anum = 1;
	int bnum = 0;

	a = &anum;
	b = &bnum;
	ft_ultimate_div_mod(a, b);
}
