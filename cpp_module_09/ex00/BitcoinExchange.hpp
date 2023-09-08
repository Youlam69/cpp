#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

void valid_value(std::string value);

void valid_date(std::string date);

void valid_data(std::string data);
void check_data_file(std::string &data_content);
void check_input( std::string input ,std::string &input_content);

class BitcoinExchange 
{
    private:
        std::map<std::string, float > _map;

    public:

        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(std::string &data_content, std::string &input_content);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        void valid_input(std::string &input_content);
        float valid_pipe(std::string &line);

};

