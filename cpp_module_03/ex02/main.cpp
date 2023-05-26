// #progma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	// ClapTrap a("BOB");

	FragTrap a("BOB");

	ScavTrap b("JIM");
	ScavTrap o;

	
	
	o = b;
	a.attack("lol");
	o.guardGate();

	// a.attack("JIM");

	return (0);
}
