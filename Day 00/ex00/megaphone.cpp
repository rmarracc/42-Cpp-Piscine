#include <iostream>

int main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (char *c = av[i]; *c; ++c)
			*c = toupper(*c);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
