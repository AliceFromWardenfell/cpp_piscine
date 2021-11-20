#include "MutantStack.class.hpp"
#include <list>
#include <vector>
#include <map>

int main()
{
	/* std::cout << "---------subject_test---------" << std::endl;
	
	{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	}

	std::cout << "-----subject_test(<list>)-----" << std::endl;
	
	{
	MutantStack< int, std::list<int> >	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack< int, std::list<int> >::it it = mstack.begin();
	MutantStack< int, std::list<int> >::it ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack< int, std::list<int> > s(mstack);
	}

	std::cout << "------subject_test(list)------" << std::endl;
	
	{
	std::list< int >	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;
	
	mstack.pop_back();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	
	std::list< int >::iterator	it = mstack.begin();
	std::list< int >::iterator	ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack< int, std::list<int> > s(mstack);
	} */

	// std::cout << "--------custom_test_01--------" << std::endl;

	{
	MutantStack< std::string >								st1;
	MutantStack< std::string, std::vector<int> >			st2;
	MutantStack< std::string, std::map<std::string, int> >	st3;

	// st1.c;
	// st2.c;
	// st3.c;
	}

	std::cout << "--------custom_test_02--------" << std::endl;

	{
	typedef std::stack<int, std::list<int> >::container_type::iterator	it;
	
	MutantStack< int, std::list<int> >	st1;
	it	it_b;
	it	it_e;

	for (size_t i = 10; i < 20; i++)
		st1.push(i);
	
	it_e = st1.end();
	for (it_b = st1.begin(); it_b != it_e; it_b++)
		std::cout << *it_b << std::endl;
	
	for (size_t i = 10; i < 20; i++)
		st1.pop();

	for (it_b = st1.begin(); it_b != it_e; it_b++)
		std::cout << "check" << *it_b << std::endl;
	}

	std::cout << "--------custom_test_03--------" << std::endl;

	{	
	MutantStack< int >	st1;

	for (size_t i = 10; i < 20; i++)
		st1.push(i);
	
	MutantStack< int >	st2 = st1;
	MutantStack< int >	st3;

	for (size_t i = 50; i < 60; i++)
		st3.push(i);

	
	std::cout << "st3.top() = " << st3.top() << std::endl;

	st3 = st1;

	std::cout << "st2.top() = " << st2.top() << std::endl;
	std::cout << "st3.top() = " << st3.top() << std::endl;
	}

	std::cout << "------------------------------" << std::endl;

	return 0;
}