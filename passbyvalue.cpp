#include <iostream>
/*
* increment(x)
*
Illustrates pass by value protocol.
*/
void increment(int x){
    std::cout << "Begining execution of increment, x = " << x ;
    x++;
    std::cout << "\nEnding execution of inctrement, x = " << x ;
} 
int main(){
    int x = 5 ;
    std::cout << "Before increment, x = " << x << "\n" ;
    increment(x);
    std::cout << "\nAfter increment, x = " << x ;
}