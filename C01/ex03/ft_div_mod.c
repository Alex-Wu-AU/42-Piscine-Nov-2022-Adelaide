/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:36:54 by nwu               #+#    #+#             */
/*   Updated: 2022/11/29 13:00:23 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a, b, c, d; 
	int* div;
	int* mod;

	div = &c;
	mod = &d;
	a = 19;
	b = 3; 

	ft_div_mod(a, b, div, mod);
	printf("%d", c);
	printf("\n%d", d);
	return (0);
}
*/
