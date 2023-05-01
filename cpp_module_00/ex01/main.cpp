/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:07:35 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/01 01:29:01 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

struct Contact_add
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int index;
};

bool isNumber(const std::string& str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

int main() {
	
	std::string test;
	PhoneBook phonebook;

	while (1)
	{
		if(std::cin.eof())
			break;
		std::string command;
		std::cout << "Enter command: " << std::endl;
		std::cin >> command;
		// getline(std::cin, test);
		// std::cout << test << std::endl;
		// std::cout << command << std::endl;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			Contact_add contact;
			std::cout << "Enter First Name" << std::endl;
			std::cin >> contact.first_name;
			std::cout << "Enter Last Name" << std::endl;
			std::cin >> contact.last_name;
			std::cout << "Enter Nickname" << std::endl;
			std::cin >> contact.nickname;
			std::cout << "Enter Phone Number" << std::endl;
			while(1)
			{
				std::cin >> contact.phone_number;
				if(std::cin.eof())
					return 1;
				if(contact.phone_number.length() > 10 || !isNumber(contact.phone_number))
				{
					std::cout << "-1- Don't use anything but numbers;" << std::endl;
					std::cout << "-2- Don't use more than 10 digits." << std::endl;
					std::cout << "-3- Remember " "-1-  -2-" " & try again " << std::endl;
				}
				else
					break;
			}
			std::cout << "Enter Darkest Secret" << std::endl;
			std::cin.clear();
			std::cin >> contact.darkest_secret;
			phonebook.add(contact.first_name, contact.last_name, contact.nickname, contact.phone_number, contact.darkest_secret);
		}
		else if (command == "SEARCH")
		{
			if (!phonebook.print_contacts())
			{
				std::cout << "JJJJJJJ" << std::endl;
			}
			else{
			std::cout << "Enter index: " << std::endl;
			std::string index;
			// int index;
			std::cin >> index;
			// while (!isNumber(index)){
			// 	if(std::cin.eof())
			// 		break;
			// 	std::cout << "Enter index: " << std::endl;
			// 	std::cin >> index;
			// }
			phonebook.search(std::atoi(index.c_str()));
			// phonebook.search(index);
				
			}
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
