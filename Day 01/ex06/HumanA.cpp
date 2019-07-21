#include "HumanA.hpp"

 HumanA::HumanA (std::string name, Weapon& props) : _name(name), _props(props)
 {
	return ;
 }
 
 HumanA::~HumanA (void)
 {
	return ;
 }
 
 void	HumanA::attack(void) const
 {
	std::cout << this->_name << " attacks with his " << this->_props.getType() << std::endl;
 }
