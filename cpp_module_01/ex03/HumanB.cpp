/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 06:04:29 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 06:16:22 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
HumanB::HumanB(std::string _name)
{
	name = _name;
}

void HumanB::attack()
{
	std::cout << name << " atatcks with thueir " << w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &z)
{ 
	w = &z;
}
