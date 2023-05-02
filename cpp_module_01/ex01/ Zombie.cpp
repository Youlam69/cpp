#include "Zombie.hpp"


std::string Zombie::get_name()
{
    return (name);
}
void Zombie::set_name(std::string nom)
{
    name = nom;
}

void Zombie::announce(void)
{
    std::cout << get_name() <<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

