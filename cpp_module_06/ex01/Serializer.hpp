#pragma once

#include <iostream> 
struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

class Serializer
{
    public:

    static   uintptr_t serialize();
    static   Data *deserialize(void *raw);
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer& operator=(const Serializer &copy);

};