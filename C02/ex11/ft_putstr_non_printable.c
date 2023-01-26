/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:50:58 by nwu               #+#    #+#             */
/*   Updated: 2022/12/07 16:57:06 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

void	write_ascii_value(char c)
{
	int		decimal;
	int		remainder;
	char	decimal_printable;

	decimal = c;
	decimal_printable = decimal / 16 + '0';
	write(1, "\\", 1);
	write(1, &decimal_printable, 1);
	remainder = decimal % 16;
	if (remainder == 10)
		write(1, "a", 1);
	else if (remainder == 11)
		write(1, "b", 1);
	else if (remainder == 12)
		write(1, "c", 1);
	else if (remainder == 13)
		write(1, "d", 1);
	else if (remainder == 14)
		write(1, "e", 1);
	else if (remainder == 15)
		write(1, "f", 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write_ascii_value(str[i]);
		}
		i++;
	}
	write(1, "\n", 1);
}
/*
int main()
{
    char    *str;
    char    string[] = "Coucou\ntu \vas bien ?";
    str = &string[0];
    //printf("%s\n", "BEFORE");
    printf("source: %s\n", string);
    //printf("%s\n", "AFTER");
    ft_putstr_non_printable(str);
    return (0);
}
*/
