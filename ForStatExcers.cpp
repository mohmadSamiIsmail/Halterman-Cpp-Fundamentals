#include <iostream>

int main () 
{
    int value ;
    std::cout << "Enter value to count up : ";
    std::cin >> value ;
    for (int count = 1 ; count <= value ; count += 1)
   {
        std::cout << "Count = " << count ;
        std::cout <<"\n";
    }
}