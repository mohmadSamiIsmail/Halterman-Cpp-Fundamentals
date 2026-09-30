/*9. Rewrite the following code fragment so a while loop is used instead of the for statement.
for (int i = 100; i > 0; i--)
std::cout << i << '\n';*/
#include <iostream>

int main() {
    int i = 100;
    while( i > 0){
        std::cout << i << '\n';

         i--;
    }
}