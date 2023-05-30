#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{    


	Dog lol;
	Dog lo;
	std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	Dog bb(lol);
	lo = lol;

	//  Animal &f = Dog("f");
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// Dog lol;
	// Animal &animal = lol;

	// const Animal* meta = new Animal();
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << animal.getType() << " " << std::endl;
	// animal.makeSound() ;
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// WrongAnimal* wrongAnimal = new WrongCat();
	// wrongAnimal->makeSound();
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// delete meta;
	// delete j;
	// delete i;
	// delete wrongAnimal;
	// delete wrongCat;
return 0;
}