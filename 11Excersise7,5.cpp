/*11. Rewrite the following code fragment so that it uses the conditional operator instead of an if/else
statement:
if (value % 2 == 0) // Is value even?
value = 0;
// If so, make it zero.
else
value = value + 1; // Otherwise, make it even*/
#include <iostream>

int main () {
    int value ;
    std::cin >> value ; 
    value = (value % 2 == 0) ? value = 0 : value + 1;
    std::cout << value ;
}