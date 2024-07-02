/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:49:16 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/29 11:25:05 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	range = max - min;
	i = 0;
	tab = (int *) malloc(range * sizeof(int));
	if (min >= max)
		return (NULL);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int	*tab;
	int	i = 0;
	int	size = 43 - 7;
	tab = ft_range(7, 43);	
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);

	return (0);
}*/
