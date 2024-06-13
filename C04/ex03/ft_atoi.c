/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:24:03 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/22 20:17:49 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_type_swap(char *str, int neg)
{
	int	nb;

	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (neg % 2 == 0)
		return (nb);
	else
		return (-nb);
}

int	ft_atoi(char *str)
{
	int		neg;
	char	ptr;

	ptr = str;
	neg = 0;
	while (*ptr != '\0')
	{
		while (*ptr == ' ' || (*ptr >= '\t' && *ptr <= '\r'))
			ptr++;
		if (*ptr == '-')
		{
			neg++;
			ptr++;
		}
		else if (*ptr >= '0' && *ptr <= '9')
			return (ft_type_swap(ptr, neg));
		ptr++;
	}
	return (0);
}
/*
int	main()
{
	char tab[] = "	 ---+--+1234ab567";
	ft_atoi(tab);
	int result = ft_atoi(tab);
	
	printf ("%d", result);
	return 0;

}*/
