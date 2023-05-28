#include "Cure.hpp"

Cure::Cure()
{
	type = "Cure";
	std::cout << "Cure : Default Constructor Called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure : Destructor Called" << std::endl;
}

Cure::Cure(Cure const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure	&Cure::operator= (const Cure &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}
