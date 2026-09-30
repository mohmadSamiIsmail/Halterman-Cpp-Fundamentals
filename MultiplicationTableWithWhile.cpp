#include <iostream> 
#include <iomanip>

int main () {
    int size ;
    
    std::cout << "Please, Enter the table size : ";
    std::cin >> size ;
    std::cout << "    " ;
    int headingColumn = 1 ;
    while (headingColumn <= size) 
    {
        std::cout << std::setw(4) << headingColumn ;
        headingColumn++;
    }
    std::cout << "\n" ;
    std::cout << "   +";
    int lineSeparateRow = 2 ;
    while (lineSeparateRow <= headingColumn)
    {
        std::cout <<"----";
        lineSeparateRow++ ;
    }
    std::cout << "\n";
    int headingRow = 1;
    while (headingRow <= size)
    {
        std::cout << std::setw(2) << headingRow << " |" ;
       headingColumn =  1;
        while (headingColumn <= size)
        {
            std::cout << std::setw(4) << headingColumn * headingRow ;
            headingColumn++;
        }
        std::cout << "\n";
        headingRow++;
    }
}