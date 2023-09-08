#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if(this != &other)
    {
        this->_map = other._map;
    }
    return *this;
}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string &data_content, std::string &input_content)
{
    while (data_content.find(',') != std::string::npos)
    {
        std::string _date = data_content.substr(0, data_content.find(','));
        data_content.erase(0, data_content.find(',') + 1);
        float _value = std::atof(data_content.substr(0, data_content.find('\n')).c_str());
        data_content.erase(0, data_content.find('\n') + 1);
        _map.insert(std::make_pair(_date, _value));
    }
    valid_input(input_content);
}


float BitcoinExchange::valid_pipe(std::string &line)
{
    std::string date = line.substr(0, 10);
    line.erase(0, 10);
    if(line.find('|') == std::string::npos)
        throw std::runtime_error("Error: bad input => " + date);
    for(size_t i = 0 ; i < line.length() && line[i] != '|'; i++)
    {
        if(line[i] != ' ')   
            throw std::runtime_error("Error: bad input => " + date);
    }
    line.erase(0, line.find('|') + 1);
    while(line[0] == ' ')
        line.erase(0, 1);
    if(line.length() == 0)
        throw std::runtime_error("Error: bad input => " + date);
    int ref = 0;
    for(size_t i = 0; i < line.length()  ;i++)
    {
        if(i == 0 && line[i] == '-')
            throw std::runtime_error("Error: not a positive number.");
        if(line[i] == '.')
            ref++;
        if(ref > 1)
            throw std::runtime_error("Error: bad input => " + date);
        if((line[i] < '0' || line[i] > '9') && line[i] != '.')
            throw std::runtime_error("Error: bad input => " + date);
    }
    float value = std::atof(line.c_str());
    if( value > 1000 )
        throw std::runtime_error("Error: too large a number." + date);
    return value;
}

void BitcoinExchange::valid_input(std::string &input_content)
{
    std::map<std::string, float>::iterator it;
    std::map<std::string, float>::iterator it1;
    while(input_content.length() > 0)
    {
        std::string line ;
        if(input_content.find('\n') != std::string::npos)
            line = input_content.substr(0, input_content.find('\n'));
        else
            line = input_content.substr(0, input_content.length());
        try{
            valid_date(line);
            std::string date = line.substr(0, 10);
            float _value = valid_pipe(line);
            it = _map.find(date);
            if(it != _map.end())
                std::cout <<  date << " => " <<  _value << " = " << it->second * _value << std::endl;
            else
                { it1 = _map.lower_bound(date);
                it1--;
                std::cout <<  date << " => " <<  _value << " = " << it1->second * _value << std::endl;}
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
        if(input_content.find('\n') != std::string::npos)
            input_content.erase(0, input_content.find('\n') + 1);
        else
            input_content.erase(0, input_content.length());
    }
}

void valid_value(std::string value)
{
    if(value.length() < 2)
        throw std::runtime_error("Wrong data format");
    if(value[0] != ',')
        throw std::runtime_error("Wrong data format");
    std::string ref_value = value.substr(1, value.length() - 1);
    int ref = 0;
    for(size_t i = 0; i < ref_value.length()  ;i++)
    {

        if(ref_value[i] == '.')
            ref++;
        if(ref > 1)
            throw std::runtime_error("Wrong data format");
        if((ref_value[i] < '0' || ref_value[i] > '9') && ref_value[i] != '.')
            throw std::runtime_error("Wrong data format");
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






