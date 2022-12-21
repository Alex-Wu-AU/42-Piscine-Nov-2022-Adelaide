/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <nwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:01:03 by nwu               #+#    #+#             */
/*   Updated: 2022/11/26 17:11:27 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

// int main()
// {
// 	//take user input and pass it as n
// 	int n;

// 	printf("Enter an  integer: ");
// 	scanf("%d", &n);
// 	//execute the function
// 	ft_is_negative(n);
// 	write(1, "\n", 1);
// 	return (0);
//}
