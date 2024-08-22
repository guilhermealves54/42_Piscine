/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:55:55 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/08 17:53:38 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			i++;
		}
		else if ((str[i] >= 65) && (str[i] <= 90))
		{
			i++;
		}
		else if (str[i] == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int c;

	printf ("String = Abc\n");
	c = ft_str_is_alpha("Abc");
	printf ("Retorno = %d\n", c);
	
	printf ("String = iadj123\n");
	c = ft_str_is_alpha("123");
	printf ("Retorno = %d\n", c);

	printf ("String vazia\n");
	c = ft_str_is_alpha("");
	printf ("Retorno = %d\n", c);
}*/
