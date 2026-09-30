/*10. Rewrite the following code fragment so that it uses the conditional operator instead of an if state
ment:
if (value % 2 != 0) // Is value even?
value = value + 1; // If not, make it even*/
#include <iostream>

int main(){
    int value;
    std::cin >> value ;
    value  = (value % 2 != 0) ? (value + 1) : value  ;
std::cout << value ;
}