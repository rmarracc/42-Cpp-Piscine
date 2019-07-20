#include "Pony.hpp"

Pony::Pony (std::string name) : _name(name)
{
	std::cout << "A Pony appears ! Welcome " << this->_name << std::endl;
}

Pony::~Pony (void)
{
	std::cout << "You killed the Pony, filthy monster !" << std::endl;
}

void Pony::do_some_stuff(void) const
{
	std::cout << this->_name << " does some stuff !" << std::endl;
}
