/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:41:14 by nwu               #+#    #+#             */
/*   Updated: 2022/12/09 18:15:13 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*lower_case_all(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	lower_case_all(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] > 47 && str[i] < 58)
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
int main()
{
    char    *str;
    char    string[] = "Salut coMMet tU vaS=?=42mOTS cinqUANte+et+un";
    str = &string[0];
    printf("%s\n", "BEFORE");
    printf("source: %s\n", string);
    ft_strcapitalize(str);
    printf("%s\n", "AFTER");
    printf("source: %s\n", string);
    return (0);
}
*/
