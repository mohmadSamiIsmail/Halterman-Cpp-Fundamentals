/*21. Redesign Listing 6.21 (startree.cpp) so that it draws a sideways tree pointing right; */

#include <iostream>

int main () 
{
    std::cout << "Enter lenghth of sideways tree pointing right : ";
    int leanghth ;
    std::cin >> leanghth;
    int rowFirstPart = 0 ;
    while (rowFirstPart < leanghth)
    {
        int count = 0;
        while (count <= rowFirstPart )
        {
        std::cout << "*";
        count++;
        }
        std::cout<< "\n";
        rowFirstPart++;
    }

   int secondRow = (leanghth - 1);
   while (secondRow > 0)
   {
   int countStarsP2 = 0;
   while (countStarsP2 < secondRow ) {
    std::cout << "*" ;
        countStarsP2++;
   }
     std::cout << "\n";
      secondRow-- ;
   }
    
}