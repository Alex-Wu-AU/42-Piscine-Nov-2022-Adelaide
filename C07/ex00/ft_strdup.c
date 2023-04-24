/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:00:07 by nwu               #+#    #+#             */
/*   Updated: 2022/12/11 00:02:06 by nwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	cpy = (char *) malloc(src_len * sizeof(char) + 1);
	if (cpy == NULL)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main(void)
{
	char	*str = "happy evaluation";
	char	*cpy;

	cpy = ft_strdup(str);
	printf("Copied: %s\n", cpy);
	return (0);
}
*/
