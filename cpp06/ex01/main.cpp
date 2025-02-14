#include "Serializer.hpp"


int main() 
{
    Data originalData;
    originalData.id = 42;
    originalData.info = "Hello, world!";

    
    uintptr_t raw = Serializer::serialize(&originalData);

    Data* deserializedData =  Serializer::deserialize(raw);
   
    std::cout << "Original ID: " << &originalData.id << ", Original Info: " << &originalData.info << std::endl;
    std::cout << "Deserialized ID: " << &deserializedData->id << ", Deserialized Info: " << &deserializedData->info << std::endl;

    return 0;
}