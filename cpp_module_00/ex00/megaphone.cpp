#include <iostream>
#include <string>


int main(int ac, char **av) 
{
	int p = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		while(av[p])
		{
			for (size_t i = 0; i < std::strlen(av[p]); i++) {
				av[1][i] = std::toupper(av[p][i]);
				std::cout << av[1][i];;
			}
			if(p + 1 < ac)
				std::cout << " ";
			p++;
		}
		std::cout << std::endl;
	}
	return(0);
}
