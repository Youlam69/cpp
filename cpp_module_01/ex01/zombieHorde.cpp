#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{

	Zombie *z;
	if(N <= 0)
		return NULL;
	z = new Zombie[N];
	for (int c = 0; c < N; c++)
		z[c].set_name(name);
	return z;	
}