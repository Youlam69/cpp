/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:20 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 04:51:21 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        // Zombie();
        // ~Zombie();

        std::string get_name();
        void set_name(std::string nom);
        void announce();
};

Zombie* zombieHorde( int N, std::string name);
int main(void);

#endif