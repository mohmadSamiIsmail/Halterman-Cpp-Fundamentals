/*9. From geometry: Write a computer program that given the lengths of the two sides of a right triangle
adjacent to the right angle computes the length of the hypotenuse of the triangle. (See Figure 8.6.)
If you are unsure how to solve the problem mathematically, do a web search for the Pythagorean
theorem*/
#include <iostream>
#include <cmath>
int main () {
double hypotenuse ,side1 ,side2 ; 
// the lengths of the two sides of a right triangle
std::cout << "Please, Enter the leanghth of tow sides adjacent to the right angle : ";
std::cin >> side1 >> side2 ;
std::cout << "The length of the hypotenuse of the triangle is : " 
 << sqrt(side1 * side1 + side2 * side2) ;//Using Pythagorean theorem
}
