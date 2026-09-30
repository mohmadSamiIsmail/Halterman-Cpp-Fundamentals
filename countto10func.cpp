#include <iostream>

void count_to_n (int n) 
{
    for(int count = 0 ; count <= n ; count++) 
    {
         std::cout << count << " " ;
    }
}
int main () 
{
      std::cout << "Going to count to 10 . . . " ;
        count_to_n(10);

          std::cout << "\nGoing to count to 5 . . . " ;
            count_to_n(10);


              return(0);
}