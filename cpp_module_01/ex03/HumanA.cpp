/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:57:54 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 07:52:33 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_w): w(_w), name(_name)
{
    std::cout << "HumanA paramitrized constructor called" << std::endl;
}
void HumanA::attack()
{
	std::cout << name << " atatcks with thueir " << w.getType() << std::endl;
}
