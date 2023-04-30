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
	
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		if(std::cin.eof())
			break;
		std::cout << "Enter command: " << std::endl;
		std::cin >> command;
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
				if(contact.phone_number.length() > 10 || !isNumber(contact.phone_number))
				{
					std::cout << "-1- Do not use anything but numbers;" << std::endl;
					std::cout << "-2- Do not use more than 10 digits." << std::endl;
					std::cout << "-3- remaber " -1- -2- " & try angain " << std::endl;
				}
				else
					break;
			}

			std::cout << "Enter Darkest Secret" << std::endl;
			std::cin >> contact.darkest_secret;
			phonebook.add(contact.first_name, contact.last_name, contact.nickname, contact.phone_number, contact.darkest_secret);
		}
		else if (command == "SEARCH"){
			if (!phonebook.print_contacts())
				continue;
			std::cout << "Enter index: " << std::endl;
			int index;
			std::cin >> index;
			phonebook.search(index);
		}
		else
			std::cout << "Invalid command" << std::endl;
	}

	// phonebook.add("younees1525929", "elamra", "youkan", "0612645", "acascascsdf");
	// phonebook.add("younees2", "elamra", "youkaijninijnijn", "0612645", "acascascsdf");
	// phonebook.add("younees3", "elamra", "youkan", "0612645", "acascascsdf");
	// phonebook.add("younees4", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("younees5", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("younees6", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("younees7", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("younees8", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("obounri1", "elamra", "youkan", "0612645", "acascascsdf");
	// // phonebook.add("obounri2", "elamra", "youkan", "0612645", "acascascsdf");

	// phonebook.print_contacts();
	// std::cout << "----------------" << std::endl;

	// phonebook.search(4);
	// std::cout << "----------------" << std::endl;

	// std::cout << phonebook.get_infos() << std::endl;
	// std::cout << std::setw(10) << "hello" << "|papa" << std::endl;
	// std::cout << "hello" << std::endl;

	return (0);
}
