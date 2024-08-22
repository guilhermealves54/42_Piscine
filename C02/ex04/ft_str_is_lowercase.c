/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:34:54 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/12 19:21:59 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char	str[] = "hello";
	char	str1[] = "Hello!";
	char	str2[] = "";

	printf ("String: %s\n", str);
	c = ft_str_is_lowercase(str);
	printf ("Retorno: %d\n", c);
	printf ("String: %s\n", str1);
	c = ft_str_is_lowercase(str1);
	printf ("Retorno: %d\n", c);
	printf ("String vazia\n");
	c = ft_str_is_lowercase(str2);
	printf ("Retorno: %d\n", c);
}*/
