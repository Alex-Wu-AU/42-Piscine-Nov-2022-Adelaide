/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:36:00 by nwu               #+#    #+#             */
/*   Updated: 2022/12/10 19:53:57 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
  space decided according to isspace(3)
*/
int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg_flag;
	int	result;

	i = 0;
	neg_flag = 1;
	result = 0;
	while (str[i] && ft_is_space(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			neg_flag *= -1;
		i++;
	}
	while (str[i] && ft_char_is_numeric(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * neg_flag);
}
/*
int main()
{
	char str2[] = "  \f \v  ----+--+1234009ab567";
	char str[] = "\n\t\r+-012345,67167";
	printf("string input: %s", str);
	printf("\natoi result: %d", ft_atoi(str));
	printf("\nstring input: %s", str2);
	printf("\natoi result: %d", ft_atoi(str2));
	return (0);
}
*/
