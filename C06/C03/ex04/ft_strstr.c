/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:15:11 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/18 20:46:28 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	char	*local_ptr;
	char	*local_to_find;

	ptr = str;
	while (*ptr)
	{
		local_ptr = ptr;
		local_to_find = to_find;
		while (*local_ptr == *local_to_find && *local_ptr && *local_to_find)
		{
			local_ptr ++;
			local_to_find ++;
		}
		if (!*local_to_find)
			return (ptr);
		ptr++;
		if (!*local_ptr)
			return NULL;
	}
	return NULL;
}
/*
int main()
{

	char tab1[] = "jwfkfejklgjltestve";
	char tab2[] = "test";
	char *result = (ft_strstr(tab1, tab2));

	if(result)
		printf("%s trouvee\n", tab2);
	else
		printf("introuvable\n");

}*/
