/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:39:30 by nwu               #+#    #+#             */
/*   Updated: 2022/12/06 17:31:05 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char    *str;
    char    string[] = "THIS IS 1 UPPER@CASE/ STRING.";
    str = &string[0];
    printf("%s\n", "BEFORE");
    printf("source: %s\n", string);
    ft_strlowcase(str);
    printf("%s\n", "AFTER");
    printf("source: %s\n", string);
    return (0);
}
*/
