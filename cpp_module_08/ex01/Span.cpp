#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &other)
{
    *this = other;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        _n = other._n;
        _v = other._v;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_v.size() >= _n)
        throw std::runtime_error("Container is full");
    _v.push_back(n);
}


void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_v.size() + std::distance(begin, end) > _n)
        throw std::runtime_error("Container is full");
    _v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
    if (_v.size() <= 1)
        throw std::runtime_error("Not enough elements");
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    int min = INT_MAX;
    size_t i = 0;
    while(i < v.size() - 1)
    {
        int diff = v[i + 1] - v[i];
        if (diff < min)
            min = diff;
        i++;
    }
    return min;
}

int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw std::runtime_error("Not enough elements");
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    return (v[v.size() - 1] - v[0]);
}