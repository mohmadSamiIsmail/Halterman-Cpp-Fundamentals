#include <iostream>
#include <locale>
#include <iomanip>

int main () {
int Times  ; 
int value = 1 ;

std::cout << " How many Times do you want to product : ";
std::cin >> Times ;
int countTimes = 1 ; 
do {
    while (countTimes <= Times ) {
std::cout << value  << '\n';  
value *= 10 ;
countTimes++;
    }}
while (value <= (Times * value));
}