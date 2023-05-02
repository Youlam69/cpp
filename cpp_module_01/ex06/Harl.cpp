#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl ;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain( std::string level )
{
	// typedef void (Harl::*harl)() ;

	// harl lista[4] = { &Harl::debug, &Harl::info , &Harl::warning, &Harl::error };
	
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
    while(i < 4)
	{
		if(str[i] == level)
            break;
        i++;
	}
    switch (i)
    {
        case 0 :
            debug();
            break;
        case 1 :
            info();
            break;

        case 2 :
            warning();
            break;

        case 3 :
            error();
            break ;
        default :
            std::cout << "[Probably complaining about insignificant problems] " << std::endl;
    }
}