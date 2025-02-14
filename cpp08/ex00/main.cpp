#include "easyfind.hpp"

int main()
{
    std::vector<int> vec = {0, 10, 20 ,30};
    try{
        std::vector<int>::iterator it = easyFind(vec, 30);
        int index = std::distance(vec.begin(), it);
        std::cout << "value found: " << *it << "at index " << index << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}