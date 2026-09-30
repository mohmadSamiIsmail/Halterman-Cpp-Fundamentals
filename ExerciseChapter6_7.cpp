/*20. Write a C++ program that allows the user to enter any number of nonnegative double-precision
floating-point values. The user terminates the input list with any negative value. The program then
prints the sum, average (arithmetic mean), maximum, and minimum of the values entered. The termi
nating negative value is not used in the computations. If the first number the user supplies is negative,
the program simply prints the text NO NUMBERS PROVIDED*/
#include <iostream>
int main()
{
    std::cout << " Enter any number of nonnegative floating-point values (any negative value to quite ): ";
    double FloatingValues = 0, sum = 0 , avg , max , min;
    int countTimes = 0;
    while (countTimes >= 0 )
    {
        std::cin >> FloatingValues;
        if ( FloatingValues < 0)
        {
            
         if (  countTimes == 0)
            std::cout << "NO NUMBERS PROVIDED!\n";
            break;
        }
        
        sum += FloatingValues;
        if (countTimes == 0)
        {
            max = FloatingValues, min = FloatingValues;
        }
        if (max <= FloatingValues )
            max = FloatingValues;
        if (min >= FloatingValues )
            min = FloatingValues;

        countTimes++;

    }

    if ( countTimes > 0 ) {
    avg = sum / countTimes ;
    std::cout << "sum = " << sum << " , avg = " << avg << " , max = " << max << " , min = " << min << "\n\n";
    }
}
