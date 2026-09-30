#include <iostream>
#include <cmath>
bool equals(double a,double b,double tolerance) {
    return a == b || fabs(a - b) < tolerance;
}
double square_root(double d){
    double root = 1.0;
    do{
      root = (root + d / root ) / 2.0;
    }
    while(!equals(d , root * root, 0.0001));
    return root;
}
int main() {
for (double d = 0.0; d < 100000.0; d += 0.0001) {
if (!equals(square_root(d), sqrt(d), 0.001))
std::cout << d << ": Expected " << sqrt(d) << ", but computed "
<< square_root(d) << '\n';
}
}