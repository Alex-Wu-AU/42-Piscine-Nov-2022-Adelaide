#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main (int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[argc - i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}