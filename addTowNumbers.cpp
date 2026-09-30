#include <iostream>

void prompt() {
    std::cout << "Please, enter intger value to add : ";
}

int main() {
    int intger1, intger2, add ;
    prompt();
    std::cin >> intger1 ; 
    prompt();
    std::cin >> intger2 ;
    add = intger2 + intger1;
    std::cout << "The result : " << add << "\n"; 
}