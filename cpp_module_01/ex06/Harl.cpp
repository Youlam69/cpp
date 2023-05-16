/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:42:01 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 10:12:31 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
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
	int i = 0;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
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
        case 1 :
            info();
        case 2 :
            warning();
        case 3 :
            error();
            break ;
        default :
            std::cout << "[Probably complaining about insignificant problems] " << std::endl;
    }
}