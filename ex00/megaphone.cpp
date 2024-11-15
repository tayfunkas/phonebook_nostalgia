#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv)
{
	std::string 	arguments[argc];
	int		i;
	int		j;
	unsigned long	k;

	if (argc < 2)
	{
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}	
	i = 0;
	j = 1;
	while (i < argc)
	{
		arguments[i] = argv[i];
		k = 0;
		while (k < arguments[i].length())
		{
			arguments[i][k] = std::toupper(arguments[i][k]);
			k++;
		}
		i++;
	}
	while (j < argc)
	{
		std::cout << arguments[j];
		if (j < argc - 1)
			std::cout << " ";
		j++;
	}
	std::cout << std::endl;
	return (0);
}
