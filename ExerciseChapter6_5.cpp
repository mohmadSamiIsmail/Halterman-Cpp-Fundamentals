/*. Write a C++ program that accepts a single integer value entered by the user. If the value entered is
less than one, the program prints nothing. If the user enters a positive integer, n, the program prints
an n×n box drawn with * characters.  */
#include <iostream>


int main () {
    int n = 0; 
 std::cout << "Enter a number to drow n * n box :  ";
 std::cin >> n ;
int row = 0 ;
 while (n > row){
int count = 0 ;
    while (count < n ) {
        std::cout << "*";
        count++;
    }
    std::cout << '\n';
    row++;
}
}