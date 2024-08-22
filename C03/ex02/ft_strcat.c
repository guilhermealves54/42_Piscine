/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:55:46 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/14 19:38:37 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "o";
	char dest[] = "Hell";
	char *fin1;
	char *fin2;	

	printf ("dest = %s\n", dest);
	printf ("src = %s\n", src);
	fin1 = ft_strcat(dest, src);
	fin2 = strcat(dest, src);
	printf ("Final ft_strcat = %s\n", fin1);
	printf ("Final strcat = %s\n", fin2);
}*/
