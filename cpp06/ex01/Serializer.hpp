#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

typedef struct Data
{
    int id;
    std::string info;
}Data;


class Serializer{

    private:
        Serializer();
    public:
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &ncopy);
        static uintptr_t serialize(Data* ptr);      
        static Data* deserialize(uintptr_t raw); 
};









#endif