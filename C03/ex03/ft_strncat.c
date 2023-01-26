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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len+ i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "a burger";
	char dest[] = "I really need: ";
    	int nb = 5;

	printf("%s\n", "BEFORE");
    	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("nb: %d\n", nb);
    	printf("%s\n", "AFTER");
	printf("%s", ft_strncat(dest, src, nb));
    	return (0);
}
*/
