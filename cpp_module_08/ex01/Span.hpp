#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <deque>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
        Span();
    public:
        Span(unsigned int n);
        Span(Span const &other);
        ~Span();
        Span &operator=(Span const &other);

        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};