/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:32:14 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/18 00:30:11 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr;

	ptr = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (ptr);
}
/*
int main()
{
	char tab1[] = "chien";
	char tab2[50] = "maison";

	ft_strncat(tab2, tab1, 3);

	printf("%s", tab2);
}*/
