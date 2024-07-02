/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:31:02 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/29 11:49:08 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}

char	ft_sizeof_memory(int size, char **strs, char *sep)
{
	int	total_size;
	int	i;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		if (i < size - 1)
			total_size += ft_strlen(sep);
		i++;
	}
	return (total_size);
}

void	ft_turbo_copy(char **dest, char *src)
{
	while (*src)
	{
		**dest = *src;
		(*dest)++;
		src++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*chain;
	char	*ptr_chain;

	i = 0;
	total_size = 0;
	if (size == 0)
		return (chain = (char *)malloc(sizeof(char)));
	total_size = ft_sizeof_memory(size, strs, sep);
	chain = (char *)malloc(sizeof(char) * total_size + 1);
	i = 0;
	ptr_chain = chain;
	while (i < size)
	{
		ft_turbo_copy(&ptr_chain, strs[i]);
		if (i < size - 1)
			ft_turbo_copy(&ptr_chain, sep);
		i++;
	}
	*ptr_chain = '\0';
	return (chain);
}
/*
int	main()
{
	char *tabs[4];

	char tab0[] = "Allo";
	char tab1[] = "la Terre";
	char tab2[] = "ici JJ";
	char tab3[] = "le cancre de 42";

	tabs[0] = tab0;
	tabs[1] = tab1;
	tabs[2] = tab2;
	tabs[3] = tab3;

	char espace[] = "  |  ";	

	char *resultat;
	resultat = ft_strjoin(4, tabs, espace);

	printf("%s", resultat);
		
}*/
