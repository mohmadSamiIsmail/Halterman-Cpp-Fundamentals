/*
* This program shows the various ways the
* sqrt function can be used.
*/
#include <iostream>
#include <cmath>
#include <algorithm>
int main() {
double x = 16.0;
double value_1, value_2 ;
// Pass a literal value and display the result
std::cout << sqrt(16.0) << '\n';
// Pass a variable and display the result
std::cout << pow(x,2) << '\n';
// Pass an expression
std::cout << sqrt(2 * x- 5) << '\n';
// Assign result ttrial variable
double y = sqrt(x);
// Use result in an expression
y = 2 * sqrt(x + 16)- 4;
std::cout << y << '\n';
// Use result as argument to a function call
y = sqrt(sqrt(double (256.0)));
std::cout << y << '\n';
//std::cout << sqrt() << '\n'; // Illegal, a string is not a number
std::cout << "The larger of " << 4 << " and " << 7
<< " is " << std::max(4, 7) << '\n';
std::cout << exp(x) << '\n';
std::cout << log(x) << '\n';
std::cout << log10(x) <<'\n';
std::cout << cos(1.04719755) << '\n' ;
std::cout << "Please enter two integer values: ";
std::cin >> value_1 >> value_2 ;
std::cout << " Max value is = " << std::max(value_1, value_2) << " "
<<", Min value = " << std::min(value_1, value_2) << "\n" ;

}