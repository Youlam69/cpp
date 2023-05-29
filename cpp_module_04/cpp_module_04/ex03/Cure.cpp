#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure : Default Constructor Called" << std::endl;
	type = "Cure";
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
		this->type = obj.type;
	}
	return (*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}
