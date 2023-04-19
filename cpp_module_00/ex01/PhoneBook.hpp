#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int 	n_contacts;

	public:
		PhoneBook();
		void add(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void search();
		void print_contact(int index);
		~PhoneBook();

		std::string get_infos();
	
};

// SEARCH : affiche le contact demandé
// ◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
// first name, last name et nickname.
// ◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
// par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
// de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
// un point (’.’).
// ◦ Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à afficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
// Sinon, affichez les informations du contact, une par ligne.
