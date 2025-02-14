#include "iter.hpp"
template <typename T>
void pri(T a)
{
    std::cout << a << std::endl;
}

int main(){

    int arr[] = {0, 1, 2, 3};
    char arr1[] = {'a','b','c'};
    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    
    ::iter(arr, size, pri<int>);
    ::iter(arr1, size1, pri<char>);

}