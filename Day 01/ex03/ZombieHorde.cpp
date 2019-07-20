#include "ZombieHorde.hpp"

std::string ZombieHorde::_rand(int size) const
{
	std::string charset = "abcdefghijklmnopqrstuvwxyz";
	std::string ret;

	while (ret.size() < size)
		ret += charset.substr(((rand() % (charset.size() - 1))), 1);
	return (ret);
}

ZombieHorde::ZombieHorde(int N) : _zombieNb(N)
{
	srand(time(0));
	this->_type = "horde";
	this->crew = new Zombie[N]();
	for (int i = 0; i < this->_zombieNb; i++)
	{
		this->crew[i]._name = this->_rand(8);
		this->crew[i]._type = this->_type;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->crew;
	return ;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_zombieNb; i++)
		this->crew[i].announce();
}
