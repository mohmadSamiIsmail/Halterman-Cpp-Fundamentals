/*6. Rewrite the following code fragment so that a switch is used instead of the if/else statements.
int value;
char ch;
std::cin >> ch;
if (ch == 'A')
value = 10;
else if (ch == 'P')
value = 20;
else if (ch == 'T')
value = 30;
else if (ch == 'V')
value = 40;
else
value = 50;
std::cout << value << '\n';*/
#include <iostream>

int main () {
int value;
char ch;
std::cin >> ch;
switch (ch) {
    case  'A' : value = 10; break;
    case  'P' : value = 20; break;
    case  'T' : value = 30; break;
    case  'V' : value = 40; break;
    default : value = 50;   
}
std::cout << value << '\n';
}
