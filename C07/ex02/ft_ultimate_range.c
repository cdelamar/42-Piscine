/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:33:59 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/29 11:46:02 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	*range = (int *) malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int	main()
{
	int *range;
	int i = 0;
	int min = 2;
	int max = 22;
	int result = ft_ultimate_range(&range, min, max);

	if (result < 0 )
		printf("\n Ah, probleme.\n");

	while(i < result)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);

	return (0);
}*/
