/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:45:23 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 07:51:45 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string _type);

		void setType(std::string _type);
		const std::string& getType();
};

#endif
