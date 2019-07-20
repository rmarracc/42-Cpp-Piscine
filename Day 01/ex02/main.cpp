#include <iostream>
#include <stdlib.h>
#include "ZombieEvent.hpp"

int	main(int ac, char **av)
{
	ZombieEvent		ze;
	Zombie			*z;

	if (ac < 2)
	{
		std::cout << "*Loud desert noises*" << std::endl;
		return (0);
	}
	srand(time(0));
	for (int i = 1; i < ac; i++)
	{
		ze.setZombieType(av[i]);
		z = ze.randomChump((rand() % (8 - 1)) + 1);
		z->announce();
		delete z;
	}
	z = ze.newZombie("Last Loser");
	z->announce();
	delete z;
}
