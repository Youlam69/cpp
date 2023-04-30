#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        // Zombie();
        // ~Zombie();

        std::string get_name();
        void set_name(std::string nom);
        void announce();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );


#endif // ZOMBIE