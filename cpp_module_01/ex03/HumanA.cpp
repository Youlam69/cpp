/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:57:54 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 06:16:11 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_w): w(_w)
{
	name = _name;
}
void HumanA::attack()
{
	std::cout << name << " atatcks with thueir " << w.getType() << std::endl;
}
