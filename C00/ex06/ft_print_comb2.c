/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:42:29 by nwu               #+#    #+#             */
/*   Updated: 2022/11/26 18:34:30 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	buf [2];

	buf[0] = '0' + (n / 10) % 10;
	buf[1] = '0' + n % 10;
	write(1, buf, 2);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			print_number(first);
			write(1, " ", 1);
			print_number(second);
			if (first != 98 || second != 99)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

/*
int main()
{
    ft_print_comb();
    write(1, "\n", 1);
     return (0);
 }
*/
