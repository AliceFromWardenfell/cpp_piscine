#include "Main.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return printr_error("wrong number of arguments", PROMPT);
	
	std::string				file = argv[1];
	const std::string&		str1 = argv[2];
	const std::string&		str2 = argv[3];
	
	std::ifstream			in;
	std::ofstream			out;
	std::string				buf;
	std::string				to_out;
	size_t 					end;

	if (file.empty() || str1.empty() || str2.empty())
		return printr_error("arguments cannot be empty", PROMPT);
	in.open(file.c_str());
	if (!in.is_open())
		return printr_error(file.insert(0, "cannot open the file: "), 0);
	out.open((file.append(".replace")).c_str());
	if (!out.is_open())
		return printr_error(file.insert(0, "cannot open the file: "), 0);

	size_t	len = str1.length();
	while (std::getline(in, buf))
		while (true)
		{
			end = buf.find(str1);
			if (end == std::string::npos)
			{
				if (!(str1.compare("\\n")))
					out << buf << str2;
				else
					out << buf << std::endl;
				break;
			}
			else
			{
				out << buf.substr(0, end);
				out << str2;
				buf.erase(0, end + len);
			}
		}
	
	return 0;
}