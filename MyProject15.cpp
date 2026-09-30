#include <iostream>
#include <string>
int main()
{ 
       int EntringInput ;
     int height;// Height of tree
     ComingPoint :
      std::cout << "Enter height of tree (1010 Quits): ";
    std::cin >> height; // Get height from user
if (height != 1010) {
    
while ( true ) {
    
    int row = 0 ;
    while (row < height ) {
        int count = 0 ;
        while (count < height - row ) {
            std::cout << " ";
            count++;
        }
        count = 0 ;
        while (count < 2 * row + 1 ) {
            std::cout << "*";
            count++; // Increment count to avoid infinite loop
        }
        std::cout << '\n';
        row++; 
    } 
    break;
    while (height ) {
}
goto ComingPoint ;
}
}
