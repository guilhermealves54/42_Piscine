/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:23:30 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/07 19:17:46 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	c[10] = {5, 4, 3, 1, 2, 7, 6, 8, 10, 9};
	int	i;

	for (int i=0;i<10;i++)
	{
		printf("%d ", c[i]);
	}
	printf ("\n");
	ft_sort_int_tab(c, 10);
	for (int i=0;i<10;i++)
        {
                printf("%d ", c[i]);
        }
	printf ("\n");
}*/
