#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact() {}

void Contact::print_contact(int index)
{
	std::cout << "|" << std::setw(10)  <<  index ;
	std::cout << "|" << std::setw(10) << (first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name);
	std::cout << "|" << std::setw(10) << (last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name);
	std::cout << "|" << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname);
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

std::string Contact::get_info()
{
	std::string infos;
	infos = "---------------------------------------------\n";
	infos += "First name: " + this->first_name + "\n";
	infos += "Last name: " + this->last_name + "\n";
	infos += "Nickname: " + this->nickname + "\n";
	infos += "Phone number: " + this->phone_number + "\n";
	infos += "Darkest secret: " + this->darkest_secret + "\n";
	infos += "---------------------------------------------\n\n";

	return (infos);
}