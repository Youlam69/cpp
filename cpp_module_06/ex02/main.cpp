#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch (std::exception &e){}
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return ;
    }
    catch (std::exception &e){}
    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return ;
    }
    catch (std::exception &e)
    {
        std::cout << "Unknown" << std::endl;
    }
}


int main(void)
{
    Base *base = generate();;
    std::cout << "Pointer: ";
    identify(base);
    std::cout << "Reference: ";
    identify(*base);
    delete base;

}