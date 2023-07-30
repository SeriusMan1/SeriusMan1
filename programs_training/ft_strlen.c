int	ft_real_atoi(char *str);
void	ft_putchar(char c);

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	result;
	
	result = ft_real_atoi(av[1]);
	if (ac == 2)
	{
		ft_strlen(result);
		ft_putcahr('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
