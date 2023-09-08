
#include "BitcoinExchange.hpp"

// void valid_value(std::string value)
// {
//     if(value.length() < 2)
//         throw std::runtime_error("Wrong data format1");
//     if(value[0] != ',')
//         throw std::runtime_error("Wrong data format2");
    
//     std::string ref_value = value.substr(1, value.length() - 1);
//     int ref = 0;
//     for(size_t i = 0; i < ref_value.length()  ;i++)
//     {
//         if(ref_value[i] == '.')
//             ref++;
//         if(ref > 1)
//             throw std::runtime_error("Wrong data format3");
//         if((ref_value[i] < '0' || ref_value[i] > '9') && ref_value[i] != '.')
//             throw std::runtime_error("Wrong data format4");
//     }
// }

// void valid_date(std::string date)
// {
//     if(date.length() < 10)
//         throw std::runtime_error("Wrong data format");
//     std::string year = date.substr(0, 4);
//     std::string month = date.substr(5, 2);
//     std::string day = date.substr(8, 2);
//     if(year > "2023" || year < "2009")
//         throw std::runtime_error("Wrong date format");
//     if(month > "12" || month < "01")
//         throw std::runtime_error("Wrong date format");
//     if(day > "31" || day < "01")
//         throw std::runtime_error("Wrong date format");
//     if (month == "02" && day > "29")
//         throw std::runtime_error("Wrong date format");
//     if (month == "04" || month == "06" || month == "09" || month == "11")
//     {
//         if(day > "30")
//             throw std::runtime_error("Wrong date format");
//     }
//     if(date[4] != '-' || date[7] != '-')
//         throw std::runtime_error("Wrong date format");
//     for(int i = 0; i < 10; i++)
//     {
//         if(i == 4 || i == 7)
//             continue;
//         if(date[i] < '0' || date[i] > '9')
//             throw std::runtime_error("Wrong data format");
//     }
//     int y = std::atoi(year.c_str());
//     if(y % 4 == 0)
//     {
//         if(month == "02" && day > "29")
//             throw std::runtime_error("Wrong date format");
//     }
// }



// void valid_data(std::string data)
// {
//     if(data.length() <= 10)
//         throw std::runtime_error("Wrong data format");
//     valid_date(data.substr(0, 10));
//     // std::cout << data + " yolam " << data.size() << std::endl;
//     // std::cout << data.substr(10, data.length() - 10)  << std::endl;
//     valid_value(data.substr(10, data.length() - 10));
// }

// void check_data_file(std::string &data_content)
// {

//     std::ifstream file("data.csv");
//     if(!file|| !file.is_open())
//         throw std::runtime_error("Can't open Data_file");
//     if(file.peek() == std::ifstream::traits_type::eof())
//         throw std::runtime_error("Data_file is empty");
//     else
//     {
//         std::string line;
//         while(std::getline(file, line).good())
//         {
//             valid_data(line);
//             data_content = data_content + line + '\n';
//             // std::cout << "|" << line << "|";
//         }
//     }
//     // exit(0);
// }


// void check_input( std::string input ,std::string &input_content)
// {

//     std::ifstream file(input);
//     if(!file|| !file.is_open())
//         throw std::runtime_error("Can't open Input_file");
//     if(file.peek() == std::ifstream::traits_type::eof())
//         throw std::runtime_error("Input_file is empty");
//     std::getline(file, input_content, '\0');
//     // std::cout << input_content << std::endl;
// }

int main(int ac, char **av)
{
    
    try
    {
        if(ac != 2)
            throw std::runtime_error("Wrong number of arguments");
        else
        {
            std::string data_content;
            std::string input_content;
            check_data_file(data_content);
            check_input(av[1], input_content);

            BitcoinExchange bitcoin(data_content, input_content);

        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
    
    
    
    // if(ac != 4)
	// {
	// 	std::cerr << "ERROR: check number of parameters, must be three" << std::endl;
	// 	return 0;
	// }
	// const std::string &file = av[1];
	// std::string s1 = av[2];
	// std::string s2 = av[3];

	// std::ifstream infile(file.c_str());
	// if(!infile || !infile.is_open())
	// {
	// 	std::cerr << "ERROR FILE Can NOT Open" << std::endl;
	// 	return 1;
	// }

	// if(infile.peek() == std::ifstream::traits_type::eof() )
	// {
	// 	std::cerr << "ERROR EMPTY FILE" << std::endl;
	// 	infile.close();
	// 	return 1;
	// }

	// std::ofstream outfile((file + ".replace").c_str());
	// if(!outfile || !outfile.is_open())
	// {
	// 	std::cerr << "CAN'T OPEN OUTPUTFILE" << std::endl;
	// 	infile.close();
	// 	return 1;
	// }

	// std::string line;

	// while(std::getline(infile, line))
	// {
	// 	if (s1 == ""){}
	// 	else if(line != "" ||  s2 != "")
	// 	{
	// 		size_t f = 0;
	// 		while((f = line.find(s1, f)) != std::string::npos)
	// 		{
	// 			line.erase(f, s1.length() );
	// 			line.insert(f, s2);
	// 			f += s2.length();
	// 		}
	// 	}
	// 	std::cout << "f = "  << "len = "<<  s1.length() << std::endl;
		
	// 	outfile << line << std::endl;
	// }