#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.class.hpp"

int main(void)
{
	Contact	inst[8];
	static int	i = 0;
	std::string	s;

	while (1)
	{
		std::cout << "Type command : " << std::endl;
		std::cin >> s;
		if (s == "EXIT")
			break ;
		else if (s == "ADD")
		{
			if (i >= 8)
				std::cerr << "Contact list is full." << std::endl;
			else
			{
				inst[i].get_params();
				i++;
			}
		}
		else if (s == "SEARCH")
		{
			for (int j = 0; j < i; j++)
				inst[j].preview();
			std::cout << "Choose Contact : " << std::endl;
			std::cin >> s;
			if (atoi(s.c_str()) < 0 || atoi(s.c_str()) >= i)
				std::cerr << "Invalid index." << std::endl;
			else
				inst[atoi(s.c_str())].display();
		}
		else
			std::cerr << "Undefined command." << std::endl;
	}
	std::cout << "Phonebook closed." << std::endl;
	return (0);
}
