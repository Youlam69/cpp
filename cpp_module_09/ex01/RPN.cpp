#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if(this != &other)
    {
        this->_stack = other._stack;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::push_to_stack(int value)
{
    this->_stack.push(value);
}

void RPN::pop_stack()
{
    if(this->_stack.size() == 0)
        throw std::runtime_error("Error: stack is empty.");
    this->_stack.pop();

}

int RPN::top_stack()
{
    if(this->_stack.size() == 0)
        throw std::runtime_error("Error: stack is empty.");
    return this->_stack.top();
}

size_t RPN::stack_size()
{
    return this->_stack.size();
}

