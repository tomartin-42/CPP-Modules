#include <iostream>

void	ft_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
		{
			ft_upper(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}

