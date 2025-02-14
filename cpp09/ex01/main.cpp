#include "RPN.hpp"


int main(int argc, char **argv)
{

    Rpn<int> deque;
    std::string arg1 = argv[1];

    try
    {
        if (argc != 2)
        {
            throw std::out_of_range("Wrong number of arguments");
        }
        deque.printStack(deque, arg1);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}