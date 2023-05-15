/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:35:21 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 06:31:16 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string _type)
{
	type = _type;
}
void  Weapon::setType(std::string _type)
{
	type = _type;
}
const std::string& Weapon::getType()
{
	return type;
}
