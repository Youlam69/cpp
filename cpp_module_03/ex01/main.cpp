#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a("BOB");
	ScavTrap b("JIM");
	ScavTrap o;
	ClapTrap *c= &o;

	o = b;
	o.attack("lol");
	o.guardGate();
	// a.attack("JIM");

	return (0);
}
