#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{    Dog lol;
	Animal &animal = lol;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << animal.getType() << " " << std::endl;
	animal.makeSound() ;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	WrongAnimal* wrongAnimal = new WrongCat();
	wrongAnimal->makeSound();
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongAnimal;
	// delete wrongCat;
return 0;
}