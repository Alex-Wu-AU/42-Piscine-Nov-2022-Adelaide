/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:48:13 by nwu               #+#    #+#             */
/*   Updated: 2022/12/01 20:54:12 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "It is printable";
	char	str2[] = "\nNot Printable";
	char*	ptr1 = &str1[0];
	char*	ptr2 = &str2[0];

	printf("Is printable: %s\n", str1);
	printf("%d\n", ft_str_is_printable(ptr1));
	printf("Is not printable: %s\n", str2);
	printf("%d\n", ft_str_is_printable(ptr2));
	return (0);
}
*/