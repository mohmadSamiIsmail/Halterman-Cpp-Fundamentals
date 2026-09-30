#include <iostream>
#include <cmath>

bool is_prime(int n)
 { 
        for (int trial_factor = 2 ; trial_factor <= sqrt(static_cast<double>(n)) ; trial_factor++) 
        {
        if ( n % trial_factor == 0) 
        return false ;
        } 
        return true ;
}
int main(){
    int max_value ;
    std::cout << "Display primes up to what value ? " ;
    std::cin >> max_value ;
    for (int value = 2 ; value <= max_value ; value++) {
        if (is_prime(value))
        std::cout << value << "\n" ; 
    }
}