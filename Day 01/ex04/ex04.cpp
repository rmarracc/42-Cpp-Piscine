#include <iostream>
#include <string>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* a = &s;
	std::string& r = s;

	std::cout << "Pointer: " << *a << std::endl;
	std::cout << "Reference: " << r << std::endl;
	return (0);
}
