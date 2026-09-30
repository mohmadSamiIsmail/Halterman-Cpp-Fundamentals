#include <iostream> 
#include <iomanip>

int main () {
    int size ;
    
    std::cout << "Please, Enter the table size : ";
    std::cin >> size ;
    std::cout << "    " ;
        for (int headingColumn = 1; headingColumn <= size; headingColumn++) 
    {
        std::cout << std::setw(4) << headingColumn;
    }
    std::cout << "\n" ;
    std::cout << "   +";
    
    for (int lineSeparateRow = 2; lineSeparateRow <= size ; lineSeparateRow++)
    {
        std::cout << "-----";
    }
    std::cout << "\n";
    
    for (int headingRow = 1; headingRow <= size; headingRow++)
    {
        std::cout << std::setw(2) << headingRow << " |" ;
        for (int headingColumn = 1; headingColumn <= size; headingColumn++)
        {
            std::cout << std::setw(4) << headingColumn * headingRow ;
        }
        std::cout << "\n";
    }
}