#include "Span.hpp"


int main()
{
	try
    {
        std::vector<int> vec;
        int N= 100;
		Span sp(1000);
        for (int i = 50; i < N; ++i)
        {        
            vec.push_back(i);
        }
	    sp.addNumbersPlus(vec);
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
	}
    catch(Span::FullException & e)
    {std::cout<<e.what()<<std::endl;}
    catch (Span::NoSpan &e)
    {std::cerr << "Errore: " << e.what() << std::endl;}
    try{
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            return 0;
    }
    catch (Span::FullException &e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}
