/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:10:47 by nwu               #+#    #+#             */
/*   Updated: 2022/12/10 20:02:54 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
	the ascii value for one digit is its int value + 48
*/
int	find_digits(int nb)
{
	int	digits;

	digits = 0;
	while (nb)
	{
		nb /= 10;
		digits++;
	}
	return (digits);
}

int	calculate_power(int base, int exp)
{
	int	result;

	result = base;
	while (exp > 1)
	{
		result *= base;
		exp--;
	}
	return (result);
}

void	print_positive_digits(int nb)
{
	int		digits;
	char	j;

	digits = find_digits(nb);
	while (digits > 1)
	{
		j = (nb / calculate_power(10, digits - 1)) % 10 + 48;
		write (1, &j, 1);
		digits--;
	}
	j = nb % 10 + 48;
	write (1, &j, 1);
}

/*
	minimum int case need to be handled: -2147483648 
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		print_positive_digits(nb);
	}
	else
	{
		print_positive_digits(nb);
	}
}
/*
int main()
{
     int input;
	 //calculate_power(input, 3);
     input = -2147483648;
     ft_putnbr(input);
	 write (1, "\n", 1);
	 input = 0;
	ft_putnbr(input);
     write (1, "\n", 1);
	 input = 139876;
	 ft_putnbr(input);
     return (0);
}
*/
