#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: ./replace [FILENAME] [s1] [s2]" << std::endl;
		return (0);
	}

	std::string		fn(av[1]);
	std::string		tf(av[2]);
	std::string		tr(av[3]);
	std::ifstream	ifs(fn);
	std::stringstream	ss;
	std::ofstream	ofs(fn + ".replace");
	std::string		buf;
	size_t	i;

	ss << ifs.rdbuf();
	buf = ss.str();
	ifs.close();
	i = buf.find(tf);
	while (i != std::string::npos)
	{
		buf.replace(i, tf.size(), tr);
		i = buf.find(tf, i + tr.size());
	}
	ofs << buf << std::endl;
	ofs.close();
	return (0);
}
