#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <exception>

int	waitStdin(void)
{
	std::string	s;

	while (std::getline(std::cin, s))	
		std::cout << s << std::endl;
	return (0);
}

void	displayFile(std::string const & fileName)
{
	std::ifstream	ifs;
	std::stringstream	ss;
	std::string		buf;

	ifs.open(fileName);
	if (ifs.fail())
	{
		std::cerr << "cato9tails: " << fileName << ": " << strerror(errno) << std::endl;
		return ;
	}
	ss << ifs.rdbuf();
	buf = ss.str();
	ifs.close();
	std::cout << buf;
}

int	main(int ac, char **av)
{
	bool	flag;
	

	flag = false;
	if (ac < 2)
		return (waitStdin());
	for (int i = 1; i < ac; i++)
	{
		std::string	s(av[i]);
		if ((s == "-" || s == "--") && flag == false)
		{
			waitStdin();
			flag = true;
		}
		else
			displayFile(s);	
	}
	return (0);
}
