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
    int headingColumn = 1;

    while (headingColumn <= size)
    {
        std::cout << std::setw(4) << headingColumn;
        headingColumn++;
    }
    std::cout << "\n";
    std::cout << "   +";
    headingColumn = 1; // Reset headingColumn for the next loop
    while (headingColumn <= size)
    {
        std::cout << "----";
        headingColumn++;
    }
    std::cout << "\n";

    int row = 1; // Reset row for the next loop
    while (row <= size)
    {
        std::cout << std::setw(2) << row << " |";

        {
            headingColumn = 1; // Reset headingColumn for the inner loop
            while (headingColumn <= size)
            {
                std::cout << std::setw(4) << row * headingColumn;
                headingColumn++;
            }
        }
        std::cout << "\n";
        row++;
    }
    return 0;
}