/*8. Rewrite the following code fragment so that a multi-way if/else is used instead of the switch
statement.
int value;
char ch;
std::cin >> ch;
switch (ch) {
case 'A':
std::cout << ch << '\n';
value = 10;
break;
case 'P':
case 'E':
std::cin >> value;
break;
case 'T':
std::cin >> ch;
value = ch;
case 'C':
value = ch;
std::cout << "value=" << value << ", ch=" << ch << '\n';
break;
case 'V':
value = ch + 1000;
break;
}
std::cout << value << '\n';*/
#include <iostream>

int main(){
int value;
char ch;
std::cin >> ch;
if (ch =='A') {
    std::cout << ch << '\n';
value = 10;
}
else if (ch == 'P' || ch == 'E') {
   std::cin >> value; 
}
else if (ch == 'T'){
std::cin >> ch;
value = ch;
std::cout << "value =" << value << ", ch =" << ch << '\n' ;} 
else if (ch == 'C'){
    value = ch;
std::cout << "value =" << value << ", ch =" << ch << '\n';
}
else if (ch == 'V') {
    value = ch + 1000;
}
std::cout << value << '\n';
}