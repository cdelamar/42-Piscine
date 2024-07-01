/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:40:05 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/22 19:42:52 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
/*
int main()
{
	int n = 49378;
	ft_putnbr(n);
}*/
