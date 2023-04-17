#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int 	n_contacts;

	public:
		PhoneBook();
		~PhoneBook();

		ADD(std::string)
		{
			
		}
};

// • PhoneBook
// ◦ Représente le répertoire.
// ◦ Contient un tableau de contacts.
// ◦ Peut enregistrer 8 contacts maximum. Si l’utilisateur tente d’ajouter un 9ème
// contact, remplacez le plus ancien par celui-ci.
// ◦ Notez que l’allocation dynamique est interdite.
// • Contact
// ◦ Représente un contact dans le répertoire.