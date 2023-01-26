/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:01:59 by nwu               #+#    #+#             */
/*   Updated: 2022/11/30 17:38:33 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	count;
	int	i;

	count = 0;
	while (count < size)
	{
		i = count;
		min = tab[count];
		while (i < size -1)
		{
			if (tab[i + 1] < tab[count])
			{
				min = tab[i + 1];
				tab[i + 1] = tab[count];
			}
			i++;
		}
		tab[count] = min;
		count++;
	}
}
/*
int main()
{
	int tab[]= {65, 8, 452, 1, 0};
	int size = 5;

	printf("%s\n", "BEFORE");
	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
		printf("%s", " "); 
	}
	
	ft_sort_int_tab(tab, size);
	printf("\n%s\n", "AFTER");
	for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
		printf("%s", " ");
	}
	return(0);
}
*/
