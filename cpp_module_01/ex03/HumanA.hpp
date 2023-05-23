/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:44:45 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 12:26:41 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &w;
		std::string name;
		int s;
	public:
		HumanA(std::string _name, Weapon &_w): w(_) , name(), s();
		HumanA(std::string _name, Weapon &_w, int d);
		void attack();
};

#endif