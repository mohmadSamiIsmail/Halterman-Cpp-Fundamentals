/* Rewrite the following code fragment so it eliminates the continue statement. Your new code’s
logic should be simpler than the logic of this fragment.
int x = 100, y;
while (x > 0) {
std::cin >> y;
if (y == 25) {
x--;
continue;
}
std::cin >> x;
std::cout << "x = " << x << '\n';
}*/
#include <iostream>
int main() {
    int x = 100, y;
    
    while (x > 0) {
        std::cin >> y;
        if (y == 25) {
            x--;
        } else {
            std::cin >> x;
            std::cout << "x = " << x << '\n';
        }
    }
    return 0;
}