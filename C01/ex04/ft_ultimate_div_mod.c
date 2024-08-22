/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:51:16 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/06 16:01:43 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 6;
	printf ("Antes: O valor de a = %d, o valor de b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf ("Depois: O valor de a = %d, o valor de b = %d \n", a, b);
}*/
