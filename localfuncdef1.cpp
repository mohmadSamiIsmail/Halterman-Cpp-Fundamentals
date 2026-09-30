#include <iostream>
// Global declarations available to all functions that follow the declarations
int two_times(int);
int three_times(int);
int main()
{
    
    std::cout << two_times(5) << '\n';
    std::cout << three_times(5) << '\n';
}
int three_times(int n)
{
    return two_times(n) + n; // 3n = 2n + n
}
int two_times(int n)
{
    return 2 * n;
}