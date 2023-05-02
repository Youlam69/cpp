#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = zombieHorde(5, "Zombie");
	for (int c = 0; c < 5; c++)
		z[c].announce();
	delete [] z;
	return 0;
}