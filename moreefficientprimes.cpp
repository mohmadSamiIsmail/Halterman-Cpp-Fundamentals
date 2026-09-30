#include <iostream>
#include <cmath>
#include <ctime>

int main () {
    clock_t starting_time = clock(), ending_time ;
for (int value = 2 ; value <= 500000 ; value++){
//Seeifvalueisprime
bool is_prime = true ; //Provisionally,value is prime
double root = sqrt(value) ;
//Try all possible factors from 2 to th esquares
// root of value
for (int trial_factor = 2 ; is_prime && trial_factor <= root ; trial_factor++ )
    is_prime = (value % trial_factor != 0);
if (is_prime)
std::cout << value << " " ; // Display the prime number
}
std::cout << '\n' ; // Move cursor down to next line
ending_time = clock();
std::cout << "The elapsed Time is : " << (static_cast <double> (ending_time - starting_time)) / CLOCKS_PER_SEC
<< "sec" ;
}