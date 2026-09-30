/*7. Rewrite the following code fragment so that a multi-way if/else is used instead of the switch
statement.
int value;
char ch;
std::cin >> ch;
switch( ch) {
case 'A':
value = 10;
break;
case 'P':
std::cin >> value;
break;
case 'T':
value = ch;
break;
case 'V':
value = ch + 1000;
break;
default:
value = 50;
}
std::cout << value << '\n' ;*/
#include <iostream>

int main () {
int value;
char ch;
std::cin >> ch;
if (ch == 'A') {value = 10;}
else if (ch == 'P') {std::cin >> value;}
else if (ch == 'T') {value = ch ;}
else if (ch == 'V') {value = ch + 1000;}
else {value = 50;}
std::cout << value << '\n' ;

}