#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

    uintptr_t raw = Serializer::serialize(data);
    std::cout << "raw: " << raw << std::endl;   
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "s1: " << ptr->s1 << std::endl;
    std::cout << "n: " << ptr->n << std::endl;
    std::cout << "s2: " << ptr->s2 << std::endl;

    delete data;
    return (0);
}