//Listing 8.1: computesquareroot.cpp
// File squareroot.cpp
#include <iostream>
int main() {

double root = 1.0;
double deffi ; 
double input ; 
std::cout << "Enter number : ";
std::cin >> input ;
do {
    root = (root + input / root  ) / 2.0 ;
    std::cout << "Root = " << root << '\n' ;
    deffi = root * root - input ;
    
}
while (deffi > 0.0001 || deffi < -0.0001);
std::cout << "Square root of " << input << " = " << root << '\n';
}