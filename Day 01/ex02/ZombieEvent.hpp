#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Zombie.hpp"

class	ZombieEvent
{
	public:

		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name) const;
		Zombie* randomChump(int size) const;
	
	private:

		std::string _rand(int size) const;
		std::string _type;
};

#endif
