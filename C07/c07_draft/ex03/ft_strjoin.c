/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:04:48 by nwu               #+#    #+#             */
/*   Updated: 2022/12/13 18:21:54 by nwu              ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calculate_length_with_sep(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;
	int	sep_length;

	i = 0;
	total_length = 0;
	sep_length = ft_strlen(sep);
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		total_length += sep_length;
		i++;
	}
	total_length -= sep_length;
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*ptr;

	if (size == 0)
		return (ptr = (char *) malloc(sizeof(char)));
	i = 0;
	total_length = calculate_length_with_sep(size, strs, sep);
	ptr = (char *) malloc(total_length * sizeof(char) + 1);
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	//strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	//strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	//strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "I";
	strs[1] = "really need,";
	strs[2] = "a burger";
	separator = "****";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
	return (0);
}
*/
