/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:17 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 04:51:29 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = zombieHorde(5, "Zombie");
	for (int c = 0; c < 5; c++)
		z[c].announce();
	delete [] z;
	return 0;
}