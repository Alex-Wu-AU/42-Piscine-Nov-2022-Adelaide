/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:43:05 by nwu               #+#    #+#             */
/*   Updated: 2022/12/01 20:45:20 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "ItIsNotUpperCase";
	char	str2[] = "UPPERCASE";
	char*	ptr1 = &str1[0];
	char*	ptr2 = &str2[0];

	printf("Is numeric: %s\n", str1);
	printf("%d\n", ft_str_is_uppercase(ptr1));
	printf("Is numeric: %s\n", str2);
	printf("%d\n", ft_str_is_uppercase(ptr2));
	return (0);
}
*/
