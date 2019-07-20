#include <iostream>
#include <stdlib.h>
#include "ZombieHorde.hpp"

int	main(int ac, char **av)
{
	ZombieHorde	*zh = new ZombieHorde(30);
	ZombieHorde	zh2(18);

	zh->announce();
	zh2.announce();
	delete zh;
	return (0);
}
