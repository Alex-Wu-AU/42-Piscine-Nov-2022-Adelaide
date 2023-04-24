#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;   
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return (2);
    while(!ft_is_prime(nb))
    {
        nb++;
        //ft_find_next_prime(nb);
    }
    return(nb);
}

int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 200, ft_find_next_prime(200));
    printf("%d -> %d\n", 370091, ft_find_next_prime(370091));
    return (0);
}