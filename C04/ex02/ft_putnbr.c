/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:58:28 by gribeiro          #+#    #+#             */
/*   Updated: 2024/08/19 16:33:35 by gribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar ('-');
		nbl *= -1;
	}
	if (nbl >= 0 && nbl < 10)
		ft_putchar (nbl + 48);
	if (nbl > 9)
	{
		ft_putnbr (nbl / 10);
		ft_putchar (nbl % 10 + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
}*/
