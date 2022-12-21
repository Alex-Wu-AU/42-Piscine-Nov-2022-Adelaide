/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:13:47 by nwu               #+#    #+#             */
/*   Updated: 2022/11/26 18:12:08 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_three_int(int i, int j, int k)
{
	char	c;
	char	d;
	char	e;

	c = i + '0';
	d = j + '0';
	e = k + '0';
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &e, 1);
}

void	ft_print_comb(void)
{
	int	head;
	int	mid;
	int	tail;

	head = 0;
	mid = 0;
	tail = 0;
	while (head < 8)
	{
		mid = head + 1;
		while (mid < 10)
		{
			tail = mid + 1;
			while (tail < 10)
			{
				ft_write_three_int (head, mid, tail);
				if (head != 7 || mid != 8 || tail != 9)
					write(1, ", ", 2);
				tail++;
			}
			mid++;
		}
		head++;
	}
}

/*
int	main()
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
*/
