/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:09:34 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/01 00:09:35 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int ac, char **av) 
{
	int p = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		while(av[p])
		{
			for (size_t i = 0; i < std::strlen(av[p]); i++) {
				av[p][i] = std::toupper(av[p][i]);
				std::cout << av[p][i];;
			}
			if(p + 1 < ac)
				std::cout << " ";
			p++;
		}
		std::cout << std::endl;
	}
	return(0);
}