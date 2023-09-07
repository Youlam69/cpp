#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const &other){ *this = other;}
        ~MutantStack(){}
        MutantStack &operator=(MutantStack const &other){
            if (this != &other)
            this->c = other.c;
            return *this;}
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        iterator begin(){ return this->c.begin();}
        iterator end(){ return this->c.end();}
        iterator rbegin(){ return this->c.rbegin();}
        iterator rend(){ return this->c.rend();}
        const_iterator begin()const { return this->c.begin();}
        const_iterator end()const { return this->c.end();}
        const_iterator rbegin()const { return this->c.rbegin();}
        const_iterator rend()const { return this->c.rend();}
};

