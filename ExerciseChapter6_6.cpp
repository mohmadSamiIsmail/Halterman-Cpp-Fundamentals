/*19. Write a C++ program that allows the user to enter exactly twenty double-precision floating-point
values. The program then prints the sum, average (arithmetic mean), maximum, and minimum of the
values entered.*/
#include <iostream>

int main () 
{
    std::cout << "Enter twenty floating point numbers to get ( sum , avg , min and max ) :";
    double max ,min ;
    double sum = 0 , FloatingValues = 0 , avg ;
    int countTimes = 0 ;
    while (countTimes < 20)
    { 
    std::cin >> FloatingValues;
    sum += FloatingValues ;
    if (countTimes == 0)
    max = FloatingValues, min = FloatingValues ;
    if (max <= FloatingValues ) 
    max = FloatingValues ;
    if (min >= FloatingValues)
    min = FloatingValues ;
    countTimes++ ;
    }

    avg = sum / 20.0 ;
    std::cout << "sum = " << sum << " , avg = " << avg << " , max = " << max << " , min = " << min << "\n\n" ;

}