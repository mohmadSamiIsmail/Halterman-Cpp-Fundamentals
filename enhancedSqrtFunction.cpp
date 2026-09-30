#include <iostream>
#include <cmath>

int main ()
{
double input = 0 ; 
long double root = 0 ;
std::cout << "Enter a value to compute its root : " ;
std::cin >> input ;
root = sqrt(input) ; 
std::cout << "The square root of : " << input << " is " << root ;  
}