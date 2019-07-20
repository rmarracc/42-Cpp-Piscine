#include "Zombie.hpp"

Zombie::Zombie (void)
{
	return ;
}

Zombie::~Zombie (void)
{
	return ;
}

void Zombie::announce(void) const
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
