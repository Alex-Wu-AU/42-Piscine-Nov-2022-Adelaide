/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:33:37 by nwu               #+#    #+#             */
/*   Updated: 2022/12/01 20:41:29 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "ItIsNotLowerCase";
	char	str2[] = "";
	char*	ptr1 = &str1[0];
	char*	ptr2 = &str2[0];

	printf("Is numeric: %s\n", str1);
	printf("%d\n", ft_str_is_lowercase(ptr1));
	printf("Is numeric: %s\n", str2);
	printf("%d\n", ft_str_is_lowercase(ptr2));
	return (0);
}
*/
