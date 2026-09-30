/*16. Suppose you were given some code from the 1960s in a language that did not support structured
statements like while. Your task is to modernize it and adapt it to C++. The following code fragment
has been adapted to C++ already, but you must now structure it with a while statement to replace
the gotos. Your code should be goto free and still behave identically to this code fragment.
©2019 Richard L. Halterman
Draft date: July 11, 2019
6.6. EXERCISES
156
int i = 0;
top: if (i >= 10)
goto end;
std::cout << i << '\n';
i++;
goto top;
end:*/
#include <iostream>

int main() {
    int i = 0;
    while (i <= 10) {
        std::cout << i << '\n';
        i++;

    }
}