/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:42:48 by nwu               #+#    #+#             */
/*   Updated: 2022/12/11 01:05:44 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	ptr = (int *) malloc(range_size * sizeof(int));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	while (i < range_size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (range_size);
}
/*
int main()
{
	int min = -10;
	int max = 2;
	int	*tab;
	int i = 0;
	int size;

	size  = ft_ultimate_range(&tab, min, max);
	printf("The size is: %d\n", size);
	printf("result is: \n");
	while (i < size)
	{
		printf(" %d", tab[i]);
		i++;
	}
	return (0);
}
*/
