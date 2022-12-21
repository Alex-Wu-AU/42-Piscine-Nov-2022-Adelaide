/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:45:56 by nwu               #+#    #+#             */
/*   Updated: 2022/11/26 16:59:22 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	j;
	int		i;	

	i = 0;
	while (i <= 9)
	{
		j = i + '0';
		write(1, &j, 1);
		i++;
	}
}

// int main()
// {
// 	ft_print_numbers();
// 	//creating a new line in case % appears
// 	write(1, "\n", 1);
// }
