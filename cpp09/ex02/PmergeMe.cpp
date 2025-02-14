

#include "PmergeMe.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::addNumber(int number) {
    vectorNumbers.push_back(number);
    listNumbers.push_back(number);
}

void PmergeMe::sortNumbers() {
    vectorStartTime = clock();
    mergeInsertSortVector();
    vectorEndTime = clock();

    listStartTime = clock();
    mergeInsertSortList();
    listEndTime = clock();
}

void PmergeMe::printNumbers() const {
    std::cout << "Before: ";
    for (auto num : vectorNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "After: ";
    for (auto num : vectorNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printExecutionTime() const {
    double vectorTime = double(vectorEndTime - vectorStartTime) / CLOCKS_PER_SEC;
    double listTime = double(listEndTime - listStartTime) / CLOCKS_PER_SEC;

    std::cout << "Time to process a range of " << vectorNumbers.size() << " elements with std::vector: " << vectorTime << " s" << std::endl;
    std::cout << "Time to process a range of " << listNumbers.size() << " elements with std::list: " << listTime << " s" << std::endl;
}

void PmergeMe::mergeInsertSortVector() {
    mergeInsertSort(vectorNumbers.begin(), vectorNumbers.end());
}

void PmergeMe::mergeInsertSortList() {
    mergeInsertSort(listNumbers.begin(), listNumbers.end());
}

template <typename Iterator>
void PmergeMe::mergeInsertSort(Iterator begin, Iterator end) {
    auto distance = std::distance(begin, end);
    if (distance <= 1) {
        return;
    }
    
    auto mid = std::next(begin, distance / 2);
    mergeInsertSort(begin, mid);
    mergeInsertSort(mid, end);

    std::vector<typename std::iterator_traits<Iterator>::value_type> sorted(distance);
    std::merge(begin, mid, mid, end, sorted.begin());
    std::copy(sorted.begin(), sorted.end(), begin);
}
