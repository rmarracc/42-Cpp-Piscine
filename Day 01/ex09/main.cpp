#include "Logger.hpp"

int main(void)
{
	Logger	*Entry = new Logger;

	Entry->log("osef.log", "Aujourd'hui j'ai mangé une pomme");
	Entry->log("interessant.log", "STARTUP DANS LE DOMAINE DE LA BLOCKCHAIN RECRUTE, 10 ANS D'EXPERIENCE EN GO REQUIS");
	Entry->log("osef.log", "Doom 15h en Holodeck");
	Entry->log("osef.log", "Omae ha mou shinde iru");
	Entry->log("Console", "Emacs >>>>>>>>>>>>>>>>>>>>>>>>>> Vim");
	delete Entry;
}
