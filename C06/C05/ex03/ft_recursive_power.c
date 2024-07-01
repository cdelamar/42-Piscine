/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:59:03 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/24 14:06:27 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (ft_recursive_power(nb, power -1) * nb);
}
/*
int     main()
{
        int     nb = 0;
	int	power = 5;
        int     result = ft_recursive_power(nb, power);

        printf("%d puissance de  %d vaut %d", nb, power, result);
}*/
