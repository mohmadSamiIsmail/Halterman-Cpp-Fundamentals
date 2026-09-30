#include <iostream>
#include  <cmath>

int main () { 
    double y ; //location of orbiting point is (x,y) 
    double x ; //these values changes as the satellite moves
    double PI = 3.14 ;
    double radians = 10.0 * PI / 180.0 ; //radians in 10 degrees
    double p_x = 100 ;//location of a fixed point is alwayes (100,0)
    double p_y = 0.0  ;//change these as necessary
    const double SIN10 = sin(radians) ;//precompute the sin & cos of 10 degrees
    const double COS10 = cos(radians) ; 
    //Getting starting point from user
    std::cout << "Enter initial satellite coordinates : " ;
    std::cin >> x >> y ;
    //compute the initial distance 
    double d1 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y)); 
    //let the satellite orbit 10 degrees
    double old_x = x ; //remember x's original value
    x = x * COS10 - y * SIN10 ; //compute new x's vlaue
    //x's vlaue has changed, but y's calculate depends on 
    //x's original value , so use x_old instead of x.
    y = old_x * SIN10 + y * COS10 ; //But 
    //compute the new destance
    double d2 = sqrt((p_x - x) * (p_x - x) + (p_y - y) * (p_y - y));

    std::cout << " Difference in distances : " << d2 - d1 << '\n' ;
}