/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:35:09 by nwu               #+#    #+#             */
/*   Updated: 2022/12/06 17:20:56 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char    *str;
    char    string[] = "this is/ 1owercase string.";
    str = &string[0];
    printf("%s\n", "BEFORE");
    printf("source: %s\n", string);
    ft_strupcase(str);
    printf("%s\n", "AFTER");
    printf("source: %s\n", string);
    return (0);
}
*/
