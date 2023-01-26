#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str [i + j] != '\0')
			j++;
		if (to_find [j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "a cat and a dog in the house.";
	char to_find_cat[] = "a cat";
	char to_find_dog[] = "a dog";
	char to_find_cow[] = "cow";
	char to_find_nothing[] = "";

	printf("str: %s", str);
	printf("\nfind cat: %s", ft_strstr(str, to_find_cat));
	printf("\nfind dog: %s", ft_strstr(str, to_find_dog));
	printf("\nfind cow: %s", ft_strstr(str, to_find_cow));
	printf("\nfind nothing: %s", ft_strstr(str, to_find_nothing));
	return (0);
}
*/