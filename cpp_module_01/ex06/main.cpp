/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:41:54 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 01:19:42 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl hi;
	if (ac != 2)
	{
		std::cout << "Error nbrs of prms\n";
		return 0;
	}

	hi.complain(av[1]);
	return (0);
}
