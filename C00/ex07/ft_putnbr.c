/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:10:47 by nwu               #+#    #+#             */
/*   Updated: 2022/11/26 19:53:18 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	find_digits(int nb)
{
	int	digits;
	int	i;

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
		j = (nb / calculate_power(10, digits - 1)) % 10 + '0';
		write (1, &j, 1);
		digits--;
	}
	j = nb % 10 + '0';
	write (1, &j, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write (1, "0", 1);
	}
	else if (nb < 0)
	{
		nb = abs(nb);
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
     printf("Enter an  integer: ");
	 //calculate_power(input, 3);
     scanf("%d", &input);
     ft_putnbr(input);
     write (1, "\n", 1);
     return (0);
}
*/
