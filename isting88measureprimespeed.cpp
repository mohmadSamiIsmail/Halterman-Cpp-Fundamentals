#include <iostream>
#include <ctime>
#include <cmath>

// Display the prime numbers between 2 and 500,000 and
// time how long it takes
int main() {
clock_t starting_time = clock(), ending_time ;
 for (int value = 2 ; value <= 50000 ; value++) {
    bool is_prime = true ; //Provisionally is prim
    //chicking if is really prime if there are no rimane from division , is not prime
    for (int trial_factor = 2 ; is_prime && trial_factor < value ; trial_factor++) {
        if (value % trial_factor == 0)
        is_prime = false ; 
        
    }
    if (is_prime)
        std::cout << value << " ";
 }
 ending_time = clock() ; //Record ending time 
 std::cout << "Elapsed time : " 
<< (static_cast <double> (ending_time - starting_time)) / CLOCKS_PER_SEC ;  //Compute elapsed time

}