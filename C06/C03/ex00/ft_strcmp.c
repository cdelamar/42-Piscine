/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 23:04:37 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/18 20:04:15 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char	str1[] = "weaty";
	char	str2[] = "werty";
	int	result;

	result = ft_strcmp(str1, str2);
	
	if(result == 0)
	{
		printf("\nstr1 = str2\n");
	}

	else if(result > 0)
	{
		printf("\nstr1 > str2\n");
	}
	else
	{
		printf("\nstr1 < str2\n");
	}

}*/
