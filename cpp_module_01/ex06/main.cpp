/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:41:54 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 10:09:41 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl hi;
	if (ac != 2)
	{
		std::cout << "Error: check number of parameters, must be one" << std::endl;
		return 0;
	}
	hi.complain(av[1]);
	return (0);
}
