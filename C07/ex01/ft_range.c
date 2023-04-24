/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 00:16:30 by nwu               #+#    #+#             */
/*   Updated: 2022/12/11 00:41:27 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		ptr = NULL;
	else
	{
		range = max - min;
		ptr = (int *) malloc(range * sizeof(int));
		if (!ptr)
			return (NULL);
		while (i < range)
		{
			ptr[i] = min + i;
			i++;
		}
	}
	return (ptr);
}
/*
int main()
{
	int min = -10;
	int max = 2;
	int *ptr;
	int i = 0;
	int size = max - min;

	ptr = ft_range(min, max);
	printf("result is: \n");
	while (i < size)
	{
		printf(" %d", ptr[i]);
		i++;
	}
	//ptr = ft_range(min, max);
	//printf("Swap min and max: %s", ptr);
	return (0);
}
*/
