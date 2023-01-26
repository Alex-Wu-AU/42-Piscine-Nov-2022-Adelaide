/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:48:12 by nwu               #+#    #+#             */
/*   Updated: 2022/12/06 18:11:30 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	result = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (result);
}
/*
int main()
{
    char src[]    = "Hello";
    char dest[] ="it's a long string";
    char* src_ptr = &src[0];
    char* dest_ptr = &dest[0];
    unsigned int n = 10;
    unsigned int result = 0;

    printf("%s\n", "BEFORE");
    printf("source: %s\n", src);
    printf("destination: %s\n", dest);
    printf("\n%s\n", "AFTER");
    result = ft_strlcpy(dest_ptr, src_ptr, n);
    printf("source: %s\n", src);
    printf("destination: %s\n", dest);
    printf("size: %d\n", result);
    return (0);
}
*/
