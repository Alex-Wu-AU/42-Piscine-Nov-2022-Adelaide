/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:23:20 by nwu               #+#    #+#             */
/*   Updated: 2022/11/29 20:00:36 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	printf("%s\n", "BEFORE");
	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	
	ft_rev_int_tab(tab, size);
	printf("\n%s\n", "AFTER");
	for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }

	return (0);
}
*/
