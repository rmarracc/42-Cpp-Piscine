#include "Logger.hpp"

void	Logger::logToConsole(std::string const & s, std::string const & dest)
{
	(void)dest;
	std::cout << makeLogEntry(s) << std::endl;
}

void	Logger::logToFile(std::string const & s, std::string const & dest)
{
	std::ofstream	ofs(dest, std::ios_base::app);

	this->_fileName = dest;
	ofs << makeLogEntry(s) << std::endl;
	ofs.close();
}

std::string	Logger::makeLogEntry(std::string const & s) const
{
	std::stringstream	ss;
	struct tm	*ts;
	time_t		t;

	t = time(NULL);
	ts = localtime(&t);
	ss << "[" << ts->tm_year + 1900 << std::setw(2) << std::setfill('0') << ts->tm_mon << std::setw(2) << std::setfill('0') << ts->tm_mday << "_" << std::setw(2) << std::setfill('0') << ts->tm_hour << std::setw(2) << std::setfill('0') << ts->tm_min << std::setw(2) << std::setfill('0') << ts->tm_sec << "] " << s;
	return (ss.str());
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	void (Logger::*f[2])(std::string const & s, std::string const & dest) =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};
	if (dest == "Console")
		(this->*(f[0]))(message, dest);
	else
		(this->*(f[1]))(message, dest);
}
