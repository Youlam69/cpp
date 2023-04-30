#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		void set_infos(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string get_info();
		~Contact();
		void print_contact(int index);
};


