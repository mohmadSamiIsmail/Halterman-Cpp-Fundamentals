#include <iostream>


int main () {
    int value ;
    do {
std::cout << "\nEnter leteral number to transfer it to word :";
std::cin >> value;
switch (value) {
    case 1 :
    std::cout << "One";
    break;
    case 2 :
    std::cout << "Tow";
    break;
    case 3 :
    std::cout << "Three";
    break;
   default : std::cout << " Nothig Important, Thanks "; 
}

}
while (value > 1);

}