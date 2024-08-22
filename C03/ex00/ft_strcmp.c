/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:03:07 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/14 19:39:43 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && r == 0)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello!";
	int	c;
	int	d;

	c = 0;
	d = 0;
	printf ("s1 = %s\n", s1);
	printf ("s2 = %s\n", s2);

	c = ft_strcmp(s1, s2);
	d = strcmp(s1, s2);

	printf ("Resultado ft_strcmp = %d\n", c);
	printf ("Resultado strcmp = %d\n", d);
}*/
