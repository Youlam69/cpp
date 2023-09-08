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
        float valid_pipe(std::string &line)
        {
            std::string date = line.substr(0, 10);
            line.erase(0, 10);
            if(line.find('|') == std::string::npos)
                throw std::runtime_error("Error: bad input => " + date);
            for(int i = 0 ; i < line.length() && line[i] != '|'; i++)
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

        void valid_input(std::string &input_content)
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

        BitcoinExchange(std::string &data_content, std::string &input_content)
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
        BitcoinExchange();

        ~BitcoinExchange(){}
        
        

};

