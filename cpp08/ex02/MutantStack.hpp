#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <list>
#include <time.h>
#include <stack>
#include <deque>

template <typename Type>                                         //  template <typename Type, implicito--typenam = std::deque<Type>
class MutantStack: public std::stack<Type>{
    
    public:
       
        //Alias per typenam::iterator begin()--> iterator begin();
        typedef typename std::deque<Type>::iterator iterator;
        MutantStack(): std::stack<Type>(){};
        ~MutantStack(){};
        MutantStack(const MutantStack<Type> &copy): std::stack<Type>(copy){};
        MutantStack &operator=(const MutantStack<Type> &copy)
        {
            if (this != &copy)
                std::stack<Type>::operator=(copy);
            return (*this);
        }
        
        
        iterator begin()
        {
            return std::stack<Type>::c.begin();
        }
        iterator end()
        {
            return std::stack<Type>::c.end();
        }
};      









#endif