#include "RPN.hpp"

bool operation(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}
int main(int ac, char **av)
{
    try
    {
        if(ac != 2)
            throw std::runtime_error("Wrong number of arguments");
        else
        {
            RPN rpn;
            std::string input = av[1];
            size_t i = 0;
            while(i < input.size())
            {
                if(isdigit(input[i]))
                    rpn.push_to_stack(input[i] - '0');
                else if(operation(input[i]))
                {
                    if(rpn.stack_size() < 2)
                        throw std::runtime_error("Error not enough numbers for operation .");
                    int b = rpn.top_stack();
                    rpn.pop_stack();
                    int a = rpn.top_stack();
                    rpn.pop_stack();
                    if (b == 0 && input[i] == '/')
                        throw std::runtime_error("Error: division by zero.");
                    int res = (input[i] == '+') * (a + b) + (input[i] == '-') * (a - b) + (input[i] == '*') * (a * b) + ((input[i] == '/') ? (a / b) : 0);
                    // int res = (input[i] == '+') * (a + b) + (input[i] == '-') * (a - b) + (input[i] == '*') * (a * b) + (input[i] == '/') * (a / b);
                    rpn.push_to_stack(res);
                }
                else if(input[i] == ' ')
                {
                    i++;
                    continue;
                }
                else
                    throw std::runtime_error("Error: bad input.");

                i++;
            }
            if(rpn.stack_size() != 1)
                throw std::runtime_error("Error: stack is not empty.");
            std::cout << rpn.top_stack() << std::endl;
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}