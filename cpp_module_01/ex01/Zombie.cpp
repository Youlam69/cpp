/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:23 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/14 01:36:07 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string nom)
{
    name = nom;
    std::cout << "copy constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << name << " is destroyed" << std::endl;
}

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

