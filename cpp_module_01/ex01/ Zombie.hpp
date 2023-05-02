#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

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

Zombie* zombieHorde( int N, std::string name);

int main(void);

#endif
// Zombie myZ;