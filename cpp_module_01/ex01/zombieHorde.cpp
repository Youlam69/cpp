/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:45:33 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 05:01:50 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{

	Zombie *z;
	if(N <= 0)
		return NULL;
	z = new Zombie[N];
	
	for (int c = 0; c < N; c++)
		z[c].set_name(name);
	return z;	
}