#include <iostream>
#include <cmath>
#include <iomanip>

double square_root (double x) {

    double root = 1.0  , difference  ;
    do {
        root = (root + x / root )/ 2.0 ;// Newton formula root
        difference = x - root * root ; // Use it to ensure the accurancy rate
    }
    while (difference > 0.0001 || difference < -0.0001) ; // Check convergence tolerance
    return root ;
}
int main () {
    for (double d = 1.0 ; d <= 10.0 ; d += 0.5 ) {
        std::cout << std::setw(7) << square_root(d) << "   :  " << sqrt(d) << '\n' ;
    }
}