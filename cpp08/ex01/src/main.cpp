#include "Span.hpp"

int main()
{
    // Span sp = Span(10000);

    // try {
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e) {
    //     std::cerr << e.what() << '\n';
    // }
    
    // std::srand(std::time(0));
    // int nb;
    // for (int i = 0; i < 10; i++)
    // {
    //     nb = std::rand() % 100;
    //     if (i % 3 == 1)
    //         nb = -nb;
    //     sp.addNumber(nb);
    //     std::cout << "[" << nb << "] ";
    // }

    // std::cout << std::endl << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;


    // Span span(10); 

    // std::vector<int> values; values.push_back(1); values.push_back(2); values.push_back(3); values.push_back(4); values.push_back(5);

    // span.addNumbers(values.begin(), values.end());
    // span.addNumber(159);

    // std::vector<int> more_values; more_values.push_back(6); more_values.push_back(7); more_values.push_back(8); more_values.push_back(9); more_values.push_back(10);

    // try {
    //     span.addNumbers(more_values.begin(), more_values.end());
    //     std::cout << "Ajout réussi !" << std::endl;
    // } catch (const std::exception& e) {
    //     std::cerr << e.what() << std::endl;
    // }

    Span span(1000);
    std::vector<int> values; values.push_back(1); values.push_back(2); values.push_back(3); values.push_back(4); values.push_back(5);
    std::vector<int> more_values; more_values.push_back(6); more_values.push_back(7); more_values.push_back(8); more_values.push_back(9); more_values.push_back(10);
    
    span.addNumbers(values.begin(), values.end());
    for (std::vector<int>::iterator it = span.begin(); it != span.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    Span test = span;
    test.addNumbers(more_values.begin(), more_values.end());
    for (std::vector<int>::iterator it = test.begin(); it != test.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    for (std::vector<int>::iterator it = span.begin(); it != span.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    
    return 0;
}