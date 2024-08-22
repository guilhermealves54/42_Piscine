/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:22:00 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/07 17:56:30 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	temp;

	i = 0;
	c = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[c];
		tab[c] = temp;
		i++;
		c--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	c[5] = {1, 2, 3, 4, 5};

	printf ("Antes: %d, %d, %d, %d, %d.\n", c[0], c[1], c[2], c[3], c[4]);
	ft_rev_int_tab (c, 5);
	printf ("Depois: %d, %d, %d, %d, %d.\n", c[0], c[1], c[2], c[3], c[4]);
}*/
