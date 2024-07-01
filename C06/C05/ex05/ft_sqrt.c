/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:40:03 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/24 19:37:12 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main()
{
	int	nb = 2147483647;
	int	result = ft_sqrt(nb);

	printf("%d", result);
}*/
