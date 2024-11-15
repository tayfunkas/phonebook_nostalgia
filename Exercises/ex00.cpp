#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string arguments[argc];
	int	i;
	int	j;

	
	i = 0;
	j = 1;
	while (i < argc)
	{
		arguments[i] = argv[i];
		i++;
	}
	std::cout << "Arguments passed are:" << std::endl;
	while (j < argc)
	{
		std::cout << arguments[j] << std::endl;
		j++;
	}
	return (0);
}
