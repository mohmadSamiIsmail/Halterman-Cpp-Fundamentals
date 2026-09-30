//Listing 9.6: betterprompt.cpp
#include <iostream>
#include <iomanip>
// Definition of the prompt function
long double prompt(int n) {
    long double result = 0.0 ;
    std::cout <<"Enter a value to add it to another #" << n << ": ";
    std::cin >> result ;
    return result ;
}
int main () {
long double value1 = 0.0 ,value2 = 0.0, sum = 0.0 ;
std::cout << "This program add two values .  . . \n" ;
value1 = prompt(1); 
value2 = prompt(2);
sum = value1 + value2 ;
std::cout << std::setprecision(10)<< value1 << " + " << value2 << " = " << sum ;

}