/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:50:44 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/13 11:52:16 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 1;
	int b = 0;
	int div = 0;
	int mod = 0;
	int *pdiv;
	int *pmod;
	
	pdiv = &div;
	pmod = &mod;

	ft_div_mod(a, b, pdiv, pmod);

	int stop = 1;
}
