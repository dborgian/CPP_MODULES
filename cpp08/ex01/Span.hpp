#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <list>
#include <time.h>



class Span{

    private:
        unsigned int _maxn;
        std::list<int> _numbers;

    public:
        Span();
        ~Span();
        Span(unsigned int max_elem);
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        void addNumber(int value);
        int shortestSpan();
        int longestSpan();
        void addNumbersPlus(std::vector<int> vec);

        class FullException: public std::exception
        {
            public:
                const char *what(void) const throw()
                {
                    return ("Span is already full, cannot add more numbers.");
                }
        };
        class NoSpan: public std::exception
        {
            public:
                const char *what(void) const throw()
                {
                    return ("No Span found");
                }           
        };
        
        
};












#endif