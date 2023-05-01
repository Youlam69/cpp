/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:07:35 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/01 02:29:23 by ylamraou         ###   ########.fr       */
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
bool add_contact(PhoneBook& phonebook)
{
			Contact_add contact;
			std::cout << "Enter First Name" << std::endl;
		if	(!std::getline(std::cin , contact.first_name).good())
		{
			exit(1);
		}				// if(std::cin.eof())
			// 	return 1;
			std::cout << "Enter Last Name" << std::endl;
			// std::cin >> contact.last_name;
			// if(std::cin.eof())
			// 	return 1;
		if(!std::getline(std::cin , contact.last_name).good())
		{
			exit(1);
		}			// std::cin >> contact.darkest_secret
			std::cout << "Enter Nickname" << std::endl;
			
			// std::cin >> contact.nickname;
			// if(std::cin.eof())
			// 	return 1;
		if(!std::getline(std::cin , contact.nickname).good())
		{
			exit(1);
		}
			std::cout << "Enter Phone Number" << std::endl;
			while(1)
			{
				if(!std::getline(std::cin , contact.phone_number).good())
				{
					exit(1);
				}				
				// std::cin >> contact.phone_number;
				// if(std::cin.eof())
				// 	return 1;
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
			// std::cin.clear();
		if(!std::getline(std::cin , contact.darkest_secret).good())
		{
			exit(1);
		}
			// std::cin >> contact.darkest_secret;
			if (contact.first_name.empty() || contact.last_name.empty() || contact.nickname.empty() || contact.phone_number.empty() || contact.darkest_secret.empty())
				std::cout << "Concat can't have empty fields." << std::endl;
			else
				phonebook.add(contact.first_name, contact.last_name, contact.nickname, contact.phone_number, contact.darkest_secret);
	return 0;
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
		// std::cin >> command;
		if(!std::getline(std::cin ,command).good())
		{
			exit(1);
		}

		// getline(std::cin, test);
		// std::cout << test << std::endl;
		// std::cout << command << std::endl;
		if (command == "EXIT")
			break;
		// else if (command.compare("ADD") != std::string::npos)
		else if (command == "ADD")
		{
			std::cout << command << std::endl;
			
			if(add_contact(phonebook))
				break;
			
			// Contact_add contact;
			// std::cout << "Enter First Name" << std::endl;
			// std::cin >> contact.first_name;
			// std::cout << "Enter Last Name" << std::endl;
			// std::cin >> contact.last_name;
			// std::cout << "Enter Nickname" << std::endl;
			// std::cin >> contact.nickname;
			// std::cout << "Enter Phone Number" << std::endl;
			// while(1)
			// {
			// 	std::cin >> contact.phone_number;
			// 	if(std::cin.eof())
			// 		return 1;
			// 	if(contact.phone_number.length() > 10 || !isNumber(contact.phone_number))
			// 	{
			// 		std::cout << "-1- Don't use anything but numbers;" << std::endl;
			// 		std::cout << "-2- Don't use more than 10 digits." << std::endl;
			// 		std::cout << "-3- Remember " "-1-  -2-" " & try again " << std::endl;
			// 	}
			// 	else
			// 		break;
			// }
			// std::cout << "Enter Darkest Secret" << std::endl;
			// std::cin.clear();
			// std::cin >> contact.darkest_secret;
			// phonebook.add(contact.first_name, contact.last_name, contact.nickname, contact.phone_number, contact.darkest_secret);
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
			// std::cin >> index;
				if(!std::getline(std::cin ,index).good())
					{
						exit(1);
					}
			// while (!isNumber(index)){
			// 	if(std::cin.eof())
			// 		break;
			// 	std::cout << "Enter index: " << std::endl;
			// 	std::cin >> index;
			// }

			// length 1 and char is num
			if (index.length() == 1)
				phonebook.search(std::atoi(index.c_str()));
			else
				std::cout << "Invalid ID" << std::endl; 
			}
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
