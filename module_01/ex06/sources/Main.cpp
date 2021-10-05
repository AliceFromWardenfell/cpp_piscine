#include "Main.hpp"
#include "Karen.class.hpp"

int		main(int argc, char **argv)
{
	std::map <std::string, int>	table;
	Karen						Karen02;

	if (argc != 2)
		return (printr_error("wrong amount of arguments", PROMPT));

	table["DEBUG"] = 1;
	table["INFO"] = 2;
	table["WARNING"] = 3;
	table["ERROR"] = 4;
	
	switch (table[argv[1]])
	{
		case 1:
			Karen02.complain("DEBUG");
		case 2:
			Karen02.complain("INFO");
		case 3:
			Karen02.complain("WARNING");
		case 4:
			{ Karen02.complain("ERROR"); break; }
		default:
			std::cout << DEFAULT << std::endl;
	}

	return 0;
}