#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : Default Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : Destructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}


MateriaSource::MateriaSource(MateriaSource const &obj)
{
	std::cout << "MateriaSource : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

MateriaSource	&MateriaSource::operator= (const MateriaSource &obj)
{
	std::cout << "MateriaSource : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->inventory[i] = obj.inventory[i]->clone();	
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return (NULL);
}
