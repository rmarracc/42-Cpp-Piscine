#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public:

		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		std::string _name;
		std::string _type;
};

#endif
