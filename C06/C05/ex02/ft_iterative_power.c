/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:29:40 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/24 14:02:49 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int main()
{
	int nb = 5;
	int power = -50;

	int result = ft_iterative_power(nb, power);
	printf("%d puissance %d = %d", nb, power, result);

}*/
