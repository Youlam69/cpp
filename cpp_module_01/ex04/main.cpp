#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main( int ac, char **av)
{

    if(ac != 4)
        return 0;
    
    const std::string &file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream infile(file.c_str());
    if(!infile || !infile.is_open())
    {
        std::cerr << "ERROR FILE Can NOT Open" << std::endl;
        return 1;
    }

    if(infile.peek() == std::ifstream::traits_type::eof() )
    {
        std::cerr << "ERROR EMPTY FILE" << std::endl;
        infile.close();
        return 1;
    }

    std::ofstream outfile((file + ".replace").c_str());
    if(!outfile || !outfile.is_open())
    {
        std::cerr << "CAN'T OPEN OUTPUTFILE" << std::endl;
        infile.close();
        return 1;
    }

    std::string line;

    while(std::getline(infile, line))
    {
        if(line != "" || s1 != "" || s2 != "")
        {
            size_t f = 0;
            while( (f = line.find(s1, f)) != std::string::npos)
            {
                line.erase(f, s1.length() );
                line.insert(f, s2);
                f += s2.length();
            }
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    std::cout << "DONE !" << std::endl;
    return 0;




}

