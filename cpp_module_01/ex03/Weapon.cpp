/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 05:35:21 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 07:52:01 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	std::cout << "Weapon constructor called" << std::endl;
}




Weapon::Weapon(std::string _type){
	type = _type;
	std::cout << "Weapon paramitrized constructor called" << std::endl;
}

void  Weapon::setType(std::string _type){
	type = _type;
}

const std::string& Weapon::getType(){
	return type;
}

Weapon::Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}