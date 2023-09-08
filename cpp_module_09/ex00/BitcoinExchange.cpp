#include "BitcoinExchange.hpp"

void valid_value(std::string value)
{
    if(value.length() < 2)
        throw std::runtime_error("Wrong data format1");
    if(value[0] != ',')
        throw std::runtime_error("Wrong data format2");
    
    std::string ref_value = value.substr(1, value.length() - 1);
    int ref = 0;
    for(size_t i = 0; i < ref_value.length()  ;i++)
    {

        if(ref_value[i] == '.')
            ref++;
        if(ref > 1)
            throw std::runtime_error("Wrong data format3");
        if((ref_value[i] < '0' || ref_value[i] > '9') && ref_value[i] != '.')
            throw std::runtime_error("Wrong data format4");
    }
}

void valid_date(std::string date)
{   
    if(date.length() < 10)
        throw std::runtime_error("Wrong data format");
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    if(year == "2009" && month == "01" && day == "01")
        throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    if(year > "2023" || year < "2009")
        throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    if(month > "12" || month < "01")
        throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    if(day > "31" || day < "01")
        throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    if (month == "02" && day > "29")
        throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    if (month == "04" || month == "06" || month == "09" || month == "11")
    {
        if(day > "30")
                    throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    }
    if(date[4] != '-' || date[7] != '-')
        throw std::runtime_error("Wrong date format");
    for(int i = 0; i < 10; i++)
    {
        if(i == 4 || i == 7)
            continue;
        if(date[i] < '0' || date[i] > '9')
            throw std::runtime_error("Wrong data format");
    }
    int y = std::atoi(year.c_str());
    if(y % 4 == 0)
    {
        if(month == "02" && day > "29")
            throw std::runtime_error("Error: bad input => " + date.substr(0, 10));
    }
}



void valid_data(std::string data)
{
    if(data.length() <= 10)
        throw std::runtime_error("Wrong data format");
    valid_date(data.substr(0, 10));
    // std::cout << data + " yolam " << data.size() << std::endl;
    // std::cout << data.substr(10, data.length() - 10)  << std::endl;
    valid_value(data.substr(10, data.length() - 10));
}

void check_data_file(std::string &data_content)
{

    std::ifstream file("data.csv");
    if(!file|| !file.is_open())
        throw std::runtime_error("Can't open Data_file");
    if(file.peek() == std::ifstream::traits_type::eof())
        throw std::runtime_error("Data_file is empty");
    else
    {
        std::string line;
        while(std::getline(file, line))
        {
            valid_data(line);
            data_content = data_content + line + '\n';
        }
    }
}


void check_input( std::string input ,std::string &input_content)
{
    std::ifstream file(input);
    if(!file|| !file.is_open())
        throw std::runtime_error("Can't open Input_file");
    if(file.peek() == std::ifstream::traits_type::eof())
        throw std::runtime_error("Input_file is empty");
    std::getline(file, input_content, '\0');
    if(input_content.substr(0, input_content.find('\n')) != "date | value")
        throw(std::runtime_error("Error: bad input_file"));
    input_content.erase(0, input_content.find('\n') + 1);
    // std::cout << input_content << std::endl;
}






