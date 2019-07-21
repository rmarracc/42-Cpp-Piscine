#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <ctime>
# include <iomanip>

class		Logger
{
	public:

		void	log(std::string const & dest, std::string const & message);

	private:
	
		void	logToConsole(std::string const & s, std::string const & dest);
		void	logToFile(std::string const & s, std::string const & dest);
		std::string	makeLogEntry(std::string const & s) const;
		std::string	_fileName;
};

#endif
