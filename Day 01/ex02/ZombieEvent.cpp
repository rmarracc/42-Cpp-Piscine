#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent (void)
{
	srand(time(0));
	this->_type = "default";
}

ZombieEvent::~ZombieEvent (void)
{
	return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

std::string ZombieEvent::_rand(int size) const
{
	std::string charset = "abcdefghijklmnopqrstuvwxyz";
	std::string ret;

	while (ret.size() < size)
		ret += charset.substr(((rand() % (charset.size() - 1))), 1);
	return (ret);
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, this->_type));
}

Zombie* ZombieEvent::randomChump(int size) const
{
	return (new Zombie(_rand(size), this->_type));
}
