#include "Brain.class.hpp"
#include <iostream>

// CONSTRUCTORS:

Brain::Brain(void)
{
	std::cout << "\tDefault \033[33mbrain\033[0m has been constructed" << std::endl;
	return;
}

Brain::Brain(Brain const & instance)
{
	for (size_t i = 0; i < NUM_OF_IDEAS; i++)
		this->_ideas[i] = instance._ideas[i];
	std::cout << "\tCopy \033[33mbrain\033[0m has been constructed" << std::endl;
	return;
}

Brain::~Brain(void)
{
	std::cout << "\t\033[33mBrain\033[0m has been destructed" << std::endl;
	return;
}

// OVERLOADS:

Brain&	Brain::operator=(Brain const & instance)
{
	if (this != &instance)
		for (size_t i = 0; i < NUM_OF_IDEAS; i++)
			this->_ideas[i] = instance._ideas[i];
	return *this;
}

void	Brain::set_idea(std::string const & idea, size_t idx)
{
	if (idx < 0 || idx > NUM_OF_IDEAS - 1) return;
	this->_ideas[idx] = idea;
	return;
}

std::string const &	Brain::get_idea(size_t idx) const
{
	if (idx < 0)
		idx = 0;
	if (idx > NUM_OF_IDEAS - 1)
		idx = NUM_OF_IDEAS - 1;
	return this->_ideas[idx];
}
