/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:00:18 by nwu               #+#    #+#             */
/*   Updated: 2022/12/05 20:53:57 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
 *if any of the string ends: meaning that they won't be equal
 *if they are equal until the loop ends, s1[i] - s2[i] will be 0
*/
/*
int main()
{
	char *s1; 
	char *s2;
	char *s3;
	int result;

	s1 = "I'm short";
	s2 = "I'm short";
	s3 = "I'm short2";
	result = ft_strcmp(s1, s2);
	printf("Is equal: %d", result);
	result = ft_strcmp(s2, s3);
	printf("Is equal: %d", result);

	return(0);
}
*/
