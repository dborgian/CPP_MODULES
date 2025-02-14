#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyFind(T& cont, int i)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), i);
    if (it == cont.end())
        throw std::runtime_error("Value not found");
    return it;
}





#endif