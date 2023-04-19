#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact() {}
void Contact::print_contact(int index)
{
	std::cout << "|" << std::setw(10)  <<  index;
	std::cout << "|" << std::setw(10) << first_name;
	std::cout << "|" << std::setw(10) << last_name ;
	std::cout << "|" << std::setw(10) << nickname;
	std::cout << "|" << std::endl;
}
void Contact::set_infos(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_infos()
{
	std::string infos;
	infos = "First name: " + this->first_name + "\n";
	infos += "Last name: " + this->last_name + "\n";
	infos += "Nickname: " + this->nickname + "\n";
	infos += "Phone number: " + this->phone_number + "\n";
	infos += "Darkest secret: " + this->darkest_secret + "\n\n";
	return (infos);
}