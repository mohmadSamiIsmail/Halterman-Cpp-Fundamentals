#include <iostream>

    // Prompt user for input
int gcd ( int num1 ,int num2 )
{
int min = (num1 < num2) ? num1 : num2 ; // Determine smaller of num1 and num2
int largestFactor = 1 ; // 1 is definitely comon factor to all ints  
for(int i = 2 ; i <= min ; i++)
if (num1 % i == 0 && num2 % i == 0)
largestFactor = i ; 
return largestFactor ;
   
}
 int main ()
{
 int num1 , num2 ;
 std::cout << "Please enter two integers : " ;
 std::cin >> num1 >> num2 ;
 int GCD = gcd(num1 , num2) ;
 std::cout << " GCD of two intgers = " << GCD ;
}
