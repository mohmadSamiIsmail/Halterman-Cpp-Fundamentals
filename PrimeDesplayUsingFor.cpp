#include <iostream>

int main()
{
int max = 0 ;
    std::cout << "Enter max value to Desplay Prime number up to it : ";
    std::cin >> max;
    
    for (int value = 2 ; value <= max ; value++ ){
    bool is_prime = true ;
    for (int trial_Factor = 2 ; trial_Factor < value ; trial_Factor++){
    if (value % trial_Factor == 0 ){ is_prime = false;}
    }
    if (is_prime){
            std::cout << value << '\n';
        }
    }

}