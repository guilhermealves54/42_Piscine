/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:10:43 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/12 19:21:30 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;
	char	str[] = "HELLO";
	char	str1[] = "Hello!";
	char	str2[] = "";

	printf ("String: %s\n", str);
	c = ft_str_is_uppercase(str);
	printf ("Retorno: %d\n", c);
	printf ("String: %s\n", str1);
	c = ft_str_is_uppercase(str1);
	printf ("Retorno: %d\n", c);
	printf ("String vazia\n");
	c = ft_str_is_uppercase(str2);
	printf ("Retorno: %d\n", c);
}*/
