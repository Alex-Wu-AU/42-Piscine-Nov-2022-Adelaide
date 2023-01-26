/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:46:47 by nwu               #+#    #+#             */
/*   Updated: 2022/12/01 20:09:30 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "It is not  alphabetical string";
	char	str2[] = "alphabetical";
	char*	ptr1 = &str1[0];
	char*	ptr2 = &str2[0];

	printf("Is alpha: %s\n", str1);
	printf("%d\n", ft_str_is_alpha(ptr1));
	printf("Is alpha: %s\n", str2);
	printf("%d\n", ft_str_is_alpha(ptr2));
	return (0);
}
*/
