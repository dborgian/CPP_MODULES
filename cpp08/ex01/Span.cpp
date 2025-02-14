#include "Span.hpp"

Span::Span():_maxn(0){
    
}

Span::~Span(){
    
}

Span::Span(unsigned int max_elem): _maxn(max_elem){

}

Span::Span(const Span &copy){
    this->_maxn = copy._maxn;
    this->_numbers = copy._numbers;
}

Span &Span::operator=(const Span &copy){
    if (this != &copy)
    {
        this->_maxn = copy._maxn;
        this->_numbers = copy._numbers;
    }
    return (*this);
}

void Span::addNumber(int value){
    if (_numbers.size() >= _maxn)
        throw FullException();
    _numbers.push_back(value);
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw NoSpan();
    _numbers.sort();
  
    int start = _numbers.front();
    int end = _numbers.back();
    int res = end - start;
    return (res);
}

int Span::shortestSpan()
{
    int curr_spam;

    if (_numbers.size() < 2)
        throw NoSpan();
    _numbers.sort();
    unsigned int shortestspam = 2147483647;
    std::list<int>::iterator it = _numbers.begin();
    std::list<int>::iterator next = it;
    ++next;
    while(next != _numbers.end())
    {
        curr_spam = *next - *it;
        if (curr_spam < shortestspam)
        {
            shortestspam = curr_spam;
        }
        ++next;
        ++it;
    }
    return (shortestspam);
}

void Span::addNumbersPlus(std::vector<int> vec)
{ 
    if (_numbers.size() + vec.size() > _maxn)
        throw FullException();
    _numbers.insert(_numbers.end(), vec.begin(), vec.end());
}



