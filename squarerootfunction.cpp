#include <iostream>
// square_root(input), 
// compute the sqare root for value provided by user
// input, receives the value entered by user
// returns the calculated result to main 
// Author : Mohmad Ismail sep 25/2026
//Adapted from Rechard L. Haltrman
double square_root(double input) {
    double root = 1.0, diff;
    do {
        root = (root + input / root) / 2.0;
        diff = input - root * root; 
    }
    while(diff > 0.0001 || diff < -0.0001);
    return root;
}
// Requests value from user, 
// and send it to sqrt function, then prints it on screen
int main() {
    double input;
    
   do {
    std::cout << "\nEnter value to compute its root (0 Quits): ";
    std::cin >> input;
    if (input == 0) break ;
    std::cout << "Root of " << input << " is " << square_root(input);
   }
    while (input != 0);
}