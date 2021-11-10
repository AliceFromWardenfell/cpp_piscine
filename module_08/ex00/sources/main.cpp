#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>

#define	TO_FIND 0

int		main(void)
{
	std::cout << "-------------------------------------" << std::endl;

	{
	std::vector<int>			v;
	std::vector<int>::iterator	v_it;

	for (size_t i = 0; i < 10; i++)
		v.push_back(i);

	try { v_it = easyfind(v, TO_FIND); std::cout << *v_it << std::endl; }
	catch (std::runtime_error ex) { std::cout << "Error: " << ex.what() << std:: endl; }
	}
	
	std::cout << "-------------------------------------" << std::endl;

	{
	std::list<int>				l;
	std::list<int>::iterator	l_it;

	for (size_t i = 0; i < 10; i++)
		l.push_back(i);

	try { l_it = easyfind(l, TO_FIND); std::cout << *l_it << std::endl; }
	catch (std::runtime_error ex) { std::cout << "Error: " << ex.what() << std:: endl; }
	}
	
	std::cout << "-------------------------------------" << std::endl;

	{
	std::deque<int>				q;
	std::deque<int>::iterator	q_it;

	for (size_t i = 0; i < 10; i++)
		q.push_back(i);

	try { q_it = easyfind(q, TO_FIND); std::cout << *q_it << std::endl; }
	catch (std::runtime_error ex) { std::cout << "Error: " << ex.what() << std:: endl; }
	}
	
	std::cout << "-------------------------------------" << std::endl;

	{
	std::set<int>				s;
	std::set<int>::iterator		s_it;

	for (size_t i = 0; i < 10; i++)
		s.insert(i);

	try { s_it = easyfind(s, TO_FIND); std::cout << *s_it << std::endl; }
	catch (std::runtime_error ex) { std::cout << "Error: " << ex.what() << std:: endl; }
	}

	std::cout << "-------------------------------------" << std::endl;

	return 0;
}
