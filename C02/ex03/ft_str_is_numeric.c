/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:26:22 by nwu               #+#    #+#             */
/*   Updated: 2022/12/01 20:32:06 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "It is not 1 numerical string";
	char	str2[] = "768519";
	char*	ptr1 = &str1[0];
	char*	ptr2 = &str2[0];

	printf("Is numeric: %s\n", str1);
	printf("%d\n", ft_str_is_numeric(ptr1));
	printf("Is numeric: %s\n", str2);
	printf("%d\n", ft_str_is_numeric(ptr2));
	return (0);
}
*/
