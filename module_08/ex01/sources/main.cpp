#include "Span.class.hpp"
#include <iostream>

int		main(void)
{
	try
	{
		Span sp = Span(5);
		
		sp.add_number(5);
		sp.add_number(3);
		sp.add_number(17);
		sp.add_number(9);
		sp.add_number(11);
		// sp.add_number(0); // exception test
		std::cout << sp.shortest_span() << std::endl;
		std::cout << sp.longest_span() << std::endl;
	}
	catch (std::exception& ex) { std::cout << "Error: " << ex.what() << std::endl; }
	
	std::cout << "----------------------" << std::endl;

	try
	{
		Span sp2 = Span(100010);
		
		sp2.add_number(5);
		sp2.add_number(-1);
		sp2.add_number(-3);
		sp2.add_number(12);
		sp2.add_number(15);
		sp2.add_number(9);
		std::cout << sp2.shortest_span() << std::endl;
		std::cout << sp2.longest_span() << std::endl;
		for (size_t i = 0; i < 100004; i++)
			sp2.add_number(i);
		std::cout << sp2.shortest_span() << std::endl;
		std::cout << sp2.longest_span() << std::endl;
	}
	catch (std::exception& ex) { std::cout << "Error: " << ex.what() << std::endl; }
	
	std::cout << "----------------------" << std::endl;
	
	try
	{
		std::vector<int>	vec;

		for (size_t i = 0; i < 500; i++)
			vec.push_back(i + 1);
		
		Span	sp3(100);

		sp3.add_int_range(vec.begin() + 100, vec.end() - 300); // change 300 on 301
		std::cout << sp3.longest_span() << std::endl;
	}
	catch (std::exception& ex) { std::cout << "Error: " << ex.what() << std::endl; }

	std::cout << "----------------------" << std::endl;

	try
	{
		Span	sp4(0);
		Span	sp5(1);

		// std::cout << "1: " << sp4.shortest_span() << std::endl;
		// std::cout << "2: " << sp4.longest_span() << std::endl;

		sp5.add_number(125);

		// std::cout << "3: " << sp5.shortest_span() << std::endl;
		std::cout << "4: " << sp5.longest_span() << std::endl;
	}
	catch (std::exception& ex) { std::cout << "Error: " << ex.what() << std::endl; }

	return 0;
}