/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:31:29 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/06 15:29:18 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int main(void)
{
	int n;
	int b;
	
	n = 20;
	b = 30;
	
	printf ("Antes: a = %d b = %d \n", n, b);
	ft_swap(&n, &b);
	printf ("Depois: a = %d b = %d \n", n, b);

}*/
