#include "Span.hpp"

int main()
{
    try
    {

        Span s(55);
        s.addNumber(5);
        s.addNumber(3);
        s.addNumber(17);
        s.addNumber(9);
        s.addNumber(11);
        std::vector<int> _v;
        for (int i = 25; i < 30; i++)
            _v.push_back(i);
        s.addNumber(_v.begin(), _v.end());    
        std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s.longestSpan() << std::endl;
        
        std::vector<int> v;
        for (int i = 0; i < 10000; i++)
            v.push_back(i);
        Span s2(10000);
        s2.addNumber(v.begin(), v.end());    
            std::cout << "Shortest span: " << s2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s2.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}