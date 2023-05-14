/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 04:56:35 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/14 01:49:43 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string stringA = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringA;
	std::string &stringREF = stringA;

	std::cout << &stringA << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << stringA << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	stringREF.append(" oppla");
	std::cout << stringA << std::endl;
}