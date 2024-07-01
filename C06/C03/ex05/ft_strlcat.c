/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:58:02 by cdelamar          #+#    #+#             */
/*   Updated: 2023/08/17 18:12:11 by cdelamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	total_dest;

	while (*dest)
		dest++;
	while (*src && size > 0)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
	*dest = '\0';
}
/*	
int main() 
{
    	char destination[20] = "Hello, ";
   	char source[] = "world!";
    
   	unsigned int result = ft_strlcat(destination, source, sizeof(destination));
   
    	printf("Concatenated string: %s\n", destination);
   	printf("Total length: %u\n", result);

    	return 0;	
}
*/
