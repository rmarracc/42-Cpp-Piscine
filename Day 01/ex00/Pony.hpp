#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class	Pony
{
	public:

		Pony(std::string name);
		~Pony(void);
		void do_some_stuff(void) const;
	
	private:
	
		std::string _name;
};

#endif
