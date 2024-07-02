/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:07:27 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/29 12:06:20 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*copy;

	size = ft_strlen(src);
	copy = (char *)malloc(size * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
/*
int	main()
{
	char	tab1[] = "test reussi tes test tesst tesst";
	char	*copy = ft_strdup(tab1);
		
	printf("%s", copy);
	
	return (0);
}*/
