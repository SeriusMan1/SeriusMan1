#include <stdio.h>
void	ft_putchar(int c);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	char	*result;
	
	result = av[1];
	if (ac == 2)
	{
		printf("%d\n", ft_strlen(av[1]));
	}
	else
		ft_putchar('\n');
	return (0);
}
