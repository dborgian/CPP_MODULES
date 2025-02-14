#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <time.h>
#include <stack>

template <typename Type> 
class Rpn: public std::stack<Type>{

    public:
        Rpn(): std::stack<Type>(){};
        ~Rpn(){};
        Rpn(const Rpn<Type> &copy): std::stack<Type>(copy){};


        Type sum(Type a, Type b) { return a + b; }
        Type sub(Type a, Type b) { return a - b; }
        Type times(Type a, Type b) { return a * b; }
        Type div(Type a, Type b) {
        if (b == 0) throw std::invalid_argument("Division by zero");
        return a / b;
    }
        

        void printStack(std::stack<Type>& stack, const std::string& str) 
        {
            std::stack<Type> temp = stack;

            for (int i = 0; i < str.length(); ++i)
            { 
                if (std::isspace(str[i]))
                    continue;
                if (std::isdigit(str[i]))
                {
                    if (std::isdigit(str[i + 1]))
                        throw std::invalid_argument("wrong number");
                    temp.push(str[i] - '0');
                }
                else
                {

                    if (temp.size() < 2)
                        throw std::invalid_argument("Error: Invalid size");
                    Type temp1 = temp.top();
                    temp.pop();
                    Type temp2 = temp.top();
                    temp.pop();

                    switch(str[i]){
                        case '+':
                            temp.push(sum(temp2, temp1));  
                            break;
                        case '-':
                            temp.push(sub(temp2, temp1));
                            break;
                        case '*':
                            temp.push(times(temp2, temp1));
                            break;
                        case '/':
                            temp.push(div(temp2, temp1));  
                            break;
                        default:
                            throw std::invalid_argument("Bad operator");
                    }

                }
                
            }
            std::cout << "Result: " << temp.top() << std::endl;
    }




};

#endif