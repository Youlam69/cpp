#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T>
int  easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found");
    return *it;
}
