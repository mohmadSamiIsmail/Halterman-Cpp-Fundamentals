#include <iostream>
/*  TO find out Prime number up to value enterd By user */
int main() {

int max_value; 

std::cout << "Display primes up to what value? ";
std::cin >> max_value;
int value = 2;

while (value <= max_value) {
     bool is_prime = true; //initialy we assume that the number is prime
    int trial_factor = 2; //smallest prime number
    while (trial_factor < value ) {
        if (value % trial_factor == 0) {

            is_prime = false;
            break; // Exit inner loop immediately
        }
        trial_factor++;
    }
    if (is_prime) {
        std::cout << value << " is prime\n"; 
    }
    value++;
}
}