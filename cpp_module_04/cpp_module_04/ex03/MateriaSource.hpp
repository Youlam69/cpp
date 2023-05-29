#ifndef _MateriaSource_HPP_
#define _MateriaSource_HPP_

#include <iostream>
#include "IMateriaSource.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	MateriaSource : public IMateriaSource
{
 	private:
        AMateria* inventory[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator= (const MateriaSource& obj);

    	void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
