#include <iostream>
#include <string>


int main(int ac, char **av) 
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		for (size_t i = 0; i < std::strlen(av[1]); i++) {
			av[1][i] = std::toupper(av[1][i]);
			std::cout << av[1][i];
		}
	}
}
