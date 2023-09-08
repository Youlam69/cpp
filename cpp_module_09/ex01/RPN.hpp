#pragma once

#include <iostream>
#include <string>
#include <stack>

class RPN
{
    private:
        std::stack<int> _stack;

    public:
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN();
    void push_to_stack(int value);
    void pop_stack();
    int top_stack();
    size_t stack_size();



};