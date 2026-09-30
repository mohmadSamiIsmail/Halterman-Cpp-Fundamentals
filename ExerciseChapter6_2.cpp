#include <iostream>

int main () {
int n = 0, m = 100;

 while (n != m) {
  std::cin >> n;
if ( n < 0){
break;
}
std::cout << "n = " << n << '\n';
}
}


/*14. Rewrite the following code fragment using a break statement and eliminating the done variable.
Your code should behave identically to this code fragment
bool done = false;
int n = 0, m = 100;
while (!done && n != m) {
std::cin >> n;
if (n < 0)
done = true;
std::cout << "n = " << n << '\n';
}
}*/