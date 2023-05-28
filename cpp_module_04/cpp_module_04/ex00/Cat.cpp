#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat : Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor Called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Cat : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat : muueew muueew" << std::endl;
}
