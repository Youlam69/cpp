/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:23 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 04:51:24 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

