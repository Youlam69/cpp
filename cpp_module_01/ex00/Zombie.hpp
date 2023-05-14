/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:51:47 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/13 23:32:09 by ylamraou         ###   ########.fr       */
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
        Zombie();
        Zombie(std::string nom);
        ~Zombie();
        std::string get_name();
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );


#endif // ZOMBIE