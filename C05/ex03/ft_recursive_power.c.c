#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    result = 1; 
    if (power < 0)
        return (0);
    else if (power == 0)
        return (result);
    else
    {
        result *= nb * ft_recursive_power(nb, power - 1);
        power--;
    }
    return (result);
}

int main()
{
    printf("2 to the power of 0 = %d\n", ft_interative_power(2, 0));
    printf("3 to the power of 3 = %d", ft_interative_power(3, 3));
    return (0);
}