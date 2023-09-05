#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer &copy)
{

    *this = copy;
}

Serializer& Serializer::operator=(const Serializer &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return (*this);
}


void *Serializer::serialize(void)
{}