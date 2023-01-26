#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
    size is the length of string of the final destination
    if the final destination is smaller than before, nothing will be appended
    the required space would be source length + size
    maximum number of i to increase will be size - dest_len - 1
    1 is the place for the null terminator 
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && (i < size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char src[] = "a burger";
	char dest[] = "I really need: ";
    unsigned int size = 30;
    unsigned int size_small = 5;
    unsigned int final_length; 

	printf("%s\n", "BEFORE");
    printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("maximum length allowed for dest: %d\n", size);
    printf("no concatenation, print the minimum number needed for concate: %d", ft_strlcat(dest, src, size_small));
    printf("\n%s\n", "AFTER");
    final_length = ft_strlcat(dest, src, size);
    printf("%s\n", dest);
    printf("final length is: %d", final_length);
    return (0);
}
*/
