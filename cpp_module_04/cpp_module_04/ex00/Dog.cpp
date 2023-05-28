#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog : Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor Called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog : nba7 nba7" << std::endl;
}
