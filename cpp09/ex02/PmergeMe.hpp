#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();
    void addNumber(int number);
    void sortNumbers();
    void printNumbers() const;
    void printExecutionTime() const;
	std::vector<int> vectorNumbers;
    std::list<int> listNumbers;
	
private:
    

    void mergeInsertSortVector();
    void mergeInsertSortList();

    template <typename Iterator>
    void mergeInsertSort(Iterator begin, Iterator end);

    clock_t vectorStartTime;
    clock_t vectorEndTime;
    clock_t listStartTime;
    clock_t listEndTime;
};

#endif