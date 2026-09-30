// Function declaration precedes main; function definition follows main
#include <iostream>
int twice(int); // Declare function named twice
int main()
{
    std::cout << twice(5) << '\n';
}
int twice(int n)
{ // Define function named twice
    return 2 * n;
}