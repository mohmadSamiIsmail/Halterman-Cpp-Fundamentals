#include <iostream>

int main()
{
    int sum = 0, input;
    std::cout << "Enter numbers to sum, negative number ends list:";

    while (true)
    {
        std::cin >> input;
        if (input < 0)
            break;
        sum += input;
    }
    std::cout << "sum : " << sum;
}