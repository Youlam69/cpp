#include "Zombie.hpp"

int main()
{
    Zombie *lol;
    lol = newZombie("foo");
    lol->announce();

    delete lol;

    randomChump("B=B");

    
}