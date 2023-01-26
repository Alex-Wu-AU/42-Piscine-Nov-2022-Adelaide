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
/*
int	main()
{
	char src[] = "a burger";
	char dest[] = "I really need: ";

	printf("%s\n", "BEFORE");
    printf("src: %s\n", src);
	printf("dest: %s\n", dest);
    printf("%s\n", "AFTER");
	printf("%s", ft_strcat(dest, src));
    return (0);
}
*/
