/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:31:07 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/06 15:46:52 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 6;
	printf ("O valor de a = %d, o valor de b = %d \n", a, b);
	ft_div_mod (a,b,&div,&mod);
	printf ("O resultado da divisao = %d, o resto = %d \n", div, mod);
}*/
