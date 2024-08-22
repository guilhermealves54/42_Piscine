/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:57:12 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/12 18:34:16 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else if (str[i] == '\0')
		{
			return (1);
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int c;

	printf ("String = 123\n");
	c = ft_str_is_numeric("123");
	printf ("Retorno = %d\n", c);

	printf ("String = iadj123\n");
	c = ft_str_is_numeric("iadj123");
	printf ("Retorno = %d\n", c);

	printf ("String vazia\n");
	c = ft_str_is_numeric("");
	printf ("Retorno = %d\n", c);
}*/
