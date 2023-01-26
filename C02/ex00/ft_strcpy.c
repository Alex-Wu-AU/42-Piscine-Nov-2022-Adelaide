/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:28:43 by nwu               #+#    #+#             */
/*   Updated: 2022/12/06 16:35:58 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[]	= "Hello";
	char dest[] ="its a long string";
	char* src_ptr = &src[0];
	char* dest_ptr = &dest[0];

	printf("%s\n", "BEFORE");
	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
	printf("\n%s\n", "AFTER");
	ft_strcpy(dest_ptr, src_ptr);
	printf("source: %s\n", src);
    printf("destination: %s\n", dest);
	return (0);
}
