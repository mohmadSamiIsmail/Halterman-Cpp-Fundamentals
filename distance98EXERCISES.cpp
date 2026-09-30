/* 9.8. EXERCISES .... 12. Complete the distance function started in Section 9.6. Test it with several point coordinates to
convince yourself that your implementation is correct */
/*
* distance(x1, y1, x2, y2)
* Computes the distance between two geometric points
* x1 is the x coordinate of the first point
* y1 is the y coordinate of the first point
* x2 is the x coordinate of the second point
* y2 is the y coordinate of the second point
* Returns the distance between (x1,y1) and (x2,y2)
* Author: Joe Algori (joe@eng-sys.net)
* Adapted from :©2019 Richard L. Halterman Draft date: July 11, 2019
* 9.7. CUSTOM FUNCTIONS VS. STANDARD FUNCTIONS 234
* Last modified: 2010-01-06
* Adapted from a formula published at
* http://en.wikipedia.org/wiki/Distance
*/
#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
/*
* Tests the trustworthy of the function
* Requests points coordinate from users
* and send them to another function to 
* perform some computions and returns result
*/
int main() {
    double x1, y1, x2, y2;
    // Tests the function efficiency
    std::cout << "Test 1 (0,0 to 3,4)   : " << distance(0, 0, 3, 4) << " (Expected: 5)\n";
    std::cout << "Test 2 (1,1 to 1,1)   : " << distance(1, 1, 1, 1) << " (Expected: 0)\n";
    std::cout << "Test 3 (-1,-1 to 2,3) : " << distance(-1, -1, 2, 3) << " (Expected: 5)\n";
    std::cout << "Enter two point's coordinates (x, y) to compute the distance between them : ";
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << "The distance between them is : " << distance(x1, y1 ,x2 ,y2) << '\n';
}
