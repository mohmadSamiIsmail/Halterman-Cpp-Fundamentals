//Listing 9.14: treefunc.cpp
#include <iostream>
/*
 * tree(height)
 * Draws a tree of a given height 
 * Height is The height of the Displayed tree  
 */
void tree(int height) {

    int row = 0;
    while (row < height) {
        // Print leading spaces
        int count = 0;
        while (count < height - row) {
            std::cout << " ";
            count++;
        }
        // Print out stars , twice the current row plus one :
        // 1. number of stars on left side of tree
        // = current row value
        // 2. exactly one star in the center of tree
        // 3. number of stars on right side of tree
        // = current row value
        count = 0;
        while (count < (row * 2 + 1)) {
            std::cout << "*";
            count++;
        }
        std::cout << "\n"; //Move cursor down to next line
        row++; // Change to next row
    }

}

int main() {
    int height; // Height of tree
    std::cout << "Please, Enter height of tree: ";
    std::cin >> height; // Get height from user
    std::cout << '\n';
    tree(height);
    
}