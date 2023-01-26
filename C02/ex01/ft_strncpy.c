/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:11:17 by nwu               #+#    #+#             */
/*   Updated: 2022/12/07 14:22:15 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}
/*
int main()
{
    char src[]    = "Hello";
    char dest[] ="it's a long string";
    char* src_ptr = &src[0];
    char* dest_ptr = &dest[0];
    unsigned int n = 4;

    printf("%s\n", "BEFORE");
    printf("source: %s\n", src);
    printf("destination: %s\n", dest);
    printf("\n%s\n", "AFTER");
    ft_strncpy(dest_ptr, src_ptr, n);
    printf("source: %s\n", src);
    printf("destination: %s\n", dest);
    return (0);
}
*/
