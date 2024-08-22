/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:41:24 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/14 19:51:17 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "oo!";
	char dest[] = "Hell";
	char *fin1;
	char *fin2;	

	printf ("dest = %s\n", dest);
	printf ("src = %s\n", src);
	fin1 = ft_strncat(dest, src, 3);
	fin2 = strncat(dest, src, 3);
	printf ("Final ft_strcat = %s\n", fin1);
	printf ("Final strcat = %s\n", fin2);
}*/
