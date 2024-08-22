/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:44:57 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/14 19:57:32 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello!";
	char s2[] = "Hello";
	int	c;
	int	d;

	c = 0;
	d = 0;
	printf ("s1 = %s\n", s1);
	printf ("s2 = %s\n", s2);

	c = ft_strncmp(s1, s2, 6);
	d = strncmp(s1, s2, 6);

	printf ("Resultado ft_strcmp = %d\n", c);
	printf ("Resultado strcmp = %d\n", d);
}*/
