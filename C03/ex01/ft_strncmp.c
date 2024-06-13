/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:11:49 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/21 10:11:06 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{

	char tab1[] = "testschlag";
	char tab2[] = "test";

	int result;

	result = ft_strncmp(tab1, tab2, 4);
	
	if (result > 0)
		printf("tab1 > tab2\n");
	else if (result < 0)
		printf("tab1 < tab2\n");
	else
		printf("tab1 == tab2\n");
}*/
