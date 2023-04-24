#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_str_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int main (int argc, char **argv)
{
    int i;
    int count;

    count = 1;
    while (count < argc)
    {
        i = count + 1;
        while (i < argc)
        {
            if (ft_strcmp(argv[count] , argv[i]) > 0)
            {
                ft_str_swap(&argv[i], &argv[count]);
            }
            i++;
        }
        count++;
    }
	i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}