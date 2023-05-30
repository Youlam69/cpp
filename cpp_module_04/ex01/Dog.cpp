#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default Constructor Called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog : Destructor Called" << std::endl;
}


Dog::Dog(Dog const &obj)
{
	std::cout << "Dog : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog : Assignation Operator Called" << std::endl;
	if (this != &obj)
	{
		type = obj.type;
		if(this->brain)
			delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog : how how ?" << std::endl;
}
