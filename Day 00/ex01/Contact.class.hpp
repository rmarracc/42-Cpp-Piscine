#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:

		std::string strtab[11];
		std::string component[11];
		Contact(void);
		~Contact(void);
		void	display(void) const;
		void	preview(void);
		void	get_params(void);
	
	private:
	
		std::string trash;
		void	preview_wrapper(int i);
		void	ask(int i);
};

#endif