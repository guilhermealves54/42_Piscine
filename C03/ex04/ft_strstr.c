/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:05:49 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/19 14:52:31 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n] && to_find[n] != '\0')
		{
			n++;
		}
		if (to_find[n] == '\0')
		{
			return (&str[i]);
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
	char str[] = "Encontra nesta string";
	char to_find[] = "nes";
	char *r;
	char *c;

	r = ft_strstr(str, to_find);
	c = strstr(str, to_find);
	printf ("Resultado ft_strstr: %s\n", r);
	printf ("Resultado strstr: %s\n", c);
}*/
