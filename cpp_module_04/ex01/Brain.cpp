#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Brain	&Brain::operator= (const Brain &obj)
{
	std::cout << "Brain : Assignation Operator Called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	}
	return (*this);
}
