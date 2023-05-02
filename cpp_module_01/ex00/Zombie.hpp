/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:47 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 04:51:53 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie
{
    private:
        std::string name;
    public:
        std::string get_name();
        void set_name(std::string nom);
        void announce();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );


#endif // ZOMBIE
