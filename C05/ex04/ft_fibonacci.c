#include <stdio.h>
/*
    the first 2 is 0 , 1
    when it goes more than 2 (starting from index = 2 which is the 3rd)
    the result is the 1 and 2 before the index
*/
int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index < 2)
        return (index);
    return (ft_fibonacci(index -2)) + ft_fibonacci(index -1);
}

int	main(void)
{
	printf("%i", ft_fibonacci(7));
    return (0);
}