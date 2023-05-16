/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:34 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 11:59:55 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *lol;
    lol = newZombie("foo");
    lol->announce();
    delete lol;
    randomChump("B=B");
    return (0);
}