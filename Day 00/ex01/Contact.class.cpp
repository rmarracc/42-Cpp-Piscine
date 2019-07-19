#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	this->strtab[0] = "First name";
	this->strtab[1] = "Last name";
	this->strtab[2] = "Nickname";
	this->strtab[3] = "Login";
	this->strtab[4] = "Postal address";
	this->strtab[5] = "Email address";
	this->strtab[6] = "Phone number";
	this->strtab[7] = "Birthday date";
	this->strtab[8] = "Favorite meal";
	this->strtab[9] = "Underwear color";
	this->strtab[10] = "Darkest secret";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::display(void) const
{
	for (int i = 0; i < 11; i++)
		std::cout << this->strtab[i] << ": " << this->component[i] << std::endl;
}

void Contact::preview(void)
{
	this->preview_wrapper(3);
	this->preview_wrapper(0);
	this->preview_wrapper(1);
	this->preview_wrapper(2);
	std::cout << std::endl;
}

void Contact::preview_wrapper(int i)
{
	this->trash = this->component[i].substr(0, 10);
	if (this->trash.length() != this->component[i].length())
		this->trash[9] = '.';
	std::cout << std::setw(10) << this->trash << '|';
}

void Contact::ask(int i)
{
	std::cout << this->strtab[i] << ": ";
	std::cin >> this->component[i];
}

void Contact::get_params(void)
{
	for (int i = 0; i < 11; i++)
		this->ask(i);
}
