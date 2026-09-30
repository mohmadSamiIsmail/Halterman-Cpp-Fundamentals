#include <iostream>
#include <cctype>
#include <cmath>

int main () {
for (char lower = 'a' ; lower <= 'z' ; lower++) 
{
char upper = toupper(lower);
std::cout << "lower = " << lower <<  " ,upper = " << upper << '\n' ;
}
char ch = 'd';
std::cout << static_cast<char>(toupper(ch)) << '\n';
std::cout <<static_cast <char> (toupper('7')) << '\n';
double a = 5, b = 3;
std::cout << log10(a) << '\n';
}