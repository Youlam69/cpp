
#include <iostream>
#include "iter.hpp"


void    decrement_(int& x)
{
    x--;
}

void    subtract_one(float& x)
{
    x += 0.55f;
}

void    switch_case(char& x)
{
    if(x >= 'a' && x <= 'z')
        x -= 32;
    else if (x >= 'A' && x <= 'Z')
        x += 32;
}

void    add_(std::string& x)
{
    x += "_is_added";
}

template<typename T>
void    called_to_write(T & t)
{
    std::cout << t << " ";
}


int main()
{
    {
        int array[] = { 0, 1, 2, 3, 4 };
        iter(array, 5, called_to_write);
        iter(array, 5, decrement_);
        std::cout << std::endl;
        iter(array, 5, called_to_write);
        std::cout << std::endl;
    }
    {
        std::string array[] = { "zero", "one", "two", "three", "four" };
        iter(array, 5, called_to_write);
        iter(array, 5, add_);
        std::cout << std::endl;
        iter(array, 5, called_to_write);
        std::cout << std::endl;
    }

    {
        float array[] = { 0.f, 0.45f, 2.2f, 3.14f, 4.4f };
        iter(array, 5, called_to_write);
        iter(array, 5, subtract_one);
        std::cout << std::endl;
        iter(array, 5, called_to_write);
        std::cout << std::endl;
    }
    {
        char array[] = { 'L', 'O', 'W', 'u', 'p' };
        iter(array, 5, called_to_write);
        iter(array, 5, switch_case);
        std::cout << std::endl;
        iter(array, 5, called_to_write);
        std::cout << std::endl;
    }
}