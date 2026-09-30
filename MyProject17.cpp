/*
* Allow the user to enter a sequence of nonnegative
* integers. The user ends the list with a negative
* integer. At the end the sum of the nonnegative
* integers entered is displayed. The program prints
* zero if the user enters no nonnegative integers.
*/
/*#include <iostream>
int main() {
int input = 0, // Ensure the loop is entered
sum = 0; // Initialize sum
// Request input from the user
std::cout << "Enter numbers to sum, negative number ends list:";
while (input >= 0) { 
    std::cin >> input; // Get input from user
    if (input >= 0) // Only add nonnegative numbers
        sum += input; // Add input to sum
       
}
 std::cout << "Sum = " << sum << '\n'; // Display the sum
} */
#include <iostream>
int main() {
int input = 1, sum = 0; // Initialize sum
std::cout << "Enter numbers to sum, type 0 as number to end the list:";
std::cin >> input;
while (input > 0 ){
    
sum += input ;
 }

std::cout << "Sum = " << sum << '\n';
}