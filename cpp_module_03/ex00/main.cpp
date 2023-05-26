#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("BOB");
	ClapTrap b("JIM");

	a.attack("JIM");
	b.takeDamage(1);
	a.takeDamage(2);
	a.attack("JIM");
	a.attack("JIM");
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	b.takeDamage(1);
	a.takeDamage(2);
	a.attack("JIM");
	return (0);
}
