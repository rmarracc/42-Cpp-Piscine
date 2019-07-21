#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Attacking (melee) " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Attacking (range) " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*f[3])(std::string const & target) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	action_name != "meleeAttack" ? (void)0 : (this->*(f[0]))(target);
	action_name != "rangedAttack" ? (void)0 : (this->*(f[1]))(target);
	action_name != "intimidatingShout" ? (void)0 : (this->*(f[2]))(target);
}
