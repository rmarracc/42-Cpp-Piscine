#include "Brain.hpp"

 Brain::Brain (void)
 {
	return ;
 }
 
 Brain::~Brain (void)
 {
	return ;
 }
 
 std::string	Brain::identify(void) const
 {
	std::stringstream ss;

	ss << static_cast<const void*>(this);
	return (ss.str());
 }
 