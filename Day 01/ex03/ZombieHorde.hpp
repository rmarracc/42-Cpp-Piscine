#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Zombie.hpp"

class	ZombieHorde
{
	public:

		ZombieHorde(int N);
		~ZombieHorde(void);
		void announce(void);
	
	private:

		std::string _rand(int size) const;
		std::string _type;
		int	_zombieNb;
		Zombie	*crew;
};

#endif
