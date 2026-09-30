#include <iostream>

int main()
{
    int max = 0 ;
    std::cout << "Enter max value to Desplay Prime number up to it : ";
    std::cin >> max;
    int value = 2;
    while (value <= max)
    {
        int trial_factor = 2 ;
        int is_prime = true ;
      while (trial_factor < value) {
        if (value % trial_factor == 0 ) {
         is_prime = false ;
        }
        trial_factor++;
      }
      if (is_prime){
        std::cout << value << '\n' ; 
      }
      value++ ;
    }
}