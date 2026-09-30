#include <iostream>
/*  TO find out Prime number up to value enterd By user */
int main() {

int max_value; 

std::cout << "Display primes up to what value? ";
std::cin >> max_value;
int value = 2;

while (value <= max_value){
bool is_prime = true ;
int trial_factore = 2 ; //smallest Prime Number
while ( is_prime && trial_factore < value )
   is_prime = (value % trial_factore++ != 0 );

   //trial_factore++;


if (is_prime) {
        std::cout << value << " is prime\n";
    }
value++;
} 

}  