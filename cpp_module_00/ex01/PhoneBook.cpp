#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook created" << std::endl;
	n_contacts = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::add(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	contacts[n_contacts % 8].set_infos(first_name, last_name, nickname, phone_number, darkest_secret);
	n_contacts++;
}

void PhoneBook::search(int index)
{
	if(index <= n_contacts && index <= 8 && index > 0)
		std::cout << contacts[index - 1].get_info() << std::endl;
	else
		std::cout << "Contact not found" << std::endl;
}

int PhoneBook::print_contacts()
{
	int nc  = 8;
	if(n_contacts < 8)
		nc = n_contacts;
	if(n_contacts == 0)
	{
		std::cout << "No contacts" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int i = 0; i < nc; i++)
		{
			contacts[i].print_contact(i + 1);
		}
	}
	return 1;
}

void PhoneBook::get_infos(int index) {
	std::cout << contacts[index].get_info();
}