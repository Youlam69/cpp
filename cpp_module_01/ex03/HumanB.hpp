/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:44:30 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 23:44:31 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
	private:
		Weapon *w;
		std::string name;

	public:
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &z);
};

#endif
