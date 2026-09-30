/*22. Redesign Listing 6.21 (startree.cpp) so that it draws a sideways tree pointing left; */

#include <iostream>

int main() {
    int hight;
    std::cout << "Enter hight of tree: ";
    std::cin >> hight;
    int rowP1 = 0 ;
    while (rowP1 < hight) {
        int countLeadingsP1 = (hight - 1) ;
        while ( (countLeadingsP1 - rowP1) > 0 ){
            std::cout << " ";
            countLeadingsP1--;
        }
        int countStarsP1 = 0;
         while (countStarsP1 <= rowP1 ){
            std::cout << "*";
            countStarsP1++;
         }


        std::cout << "\n";
        rowP1++;
    }
    int rowP2 = (hight - 1);
    while (rowP2 > 0)
    {
        int countLeadingsP2 = 0;
      while (countLeadingsP2 < (hight - rowP2))
      {
       std::cout << " "; 
       countLeadingsP2++;
      }
      int countStarsP2 = 0 ;
        while (countStarsP2 < rowP2 )
        {
            std::cout << "*";
            countStarsP2++;
        }
        std::cout << "\n";
        rowP2--;
    }
    
    return 0;
}