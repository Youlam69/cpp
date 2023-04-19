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
void search()
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << Contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << Contacts[i].get_nickname() << "|" << std::endl;
	}
	std::cout << std::setw(10) << Contacts ;

}
std::string PhoneBook::get_infos() {
	std::string infos;
	for (int i = 0; i < 8; i++)
	{
		infos += contacts[i].get_infos();
	}
	return (infos);
}


// ADD : enregistrer un nouveau contact
// ◦ Si l’utilisateur entre cette commande, le programme lui demande de remplir
// une par une les informations du nouveau contact. Une fois tous les champs
// complétés, le nouveau contact est ajouté au répertoire.
// ◦ Un contact possède les champs suivants : first name (prénom), last name
// (nom de famille), nickname (surnom), phone number (numéro de téléphone),
// et darkest secret (son plus lourd secret). Les champs d’un contact enregistré ne
// peuvent être vides.