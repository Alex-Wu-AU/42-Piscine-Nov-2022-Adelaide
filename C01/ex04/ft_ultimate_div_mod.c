/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:02:57 by nwu               #+#    #+#             */
/*   Updated: 2022/11/29 13:19:52 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int main()
{
	int	a, b;
	//int*	ptr_a;
	//int*	ptr_b;
	//
	a = 35;
	b = 9;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("\n%d", b);
	return (0);
}
*/
