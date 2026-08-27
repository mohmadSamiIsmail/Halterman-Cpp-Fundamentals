#include <iostream>
#include <iomanip>
int main()
{
    int size; // The number of rows and columns in the table
    std::cout << "Please enter the table size: ";
    std::cin >> size;
    // Print a size x size multiplication table
    // First, print heading: 1 2 3 4 5 etc.
    std::cout << "    ";
    // Print column heading
    int heading = 1;
    while (headingColumn <= size)
    {
        std::cout << std::setw(4) << headingColumn;
        heading++;
    }
    std::cout << "\n";
    std::cout << "    +";
    while (headingColumn <= size)
    {
        std::cout << "----";
        headingColumn++;
    }
    int row = 1;
    while (row <= size)
    {
        std::cout << std::setw(2) << row << "|";
        row++;
    }
}