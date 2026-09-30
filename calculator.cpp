#include <iostream>
/* 
 * Help_screen function, 
 * Displays information about How this program works 
 * and explain how can use it 
 * Accepts no parameters 
 * Returns nothing
 */

void help_screen() {
    std::cout << "Add : Adds two numbers\n";
    std::cout << "   Example : a 8.0 4.0\n";
    std::cout << "Subtract : Subtracts two numbers\n";
    std::cout << "   Example : s 3.0 2.0 \n";
    std::cout << "Print : Displays the result on screen\n";
    std::cout << "   Example : p\n";
    std::cout << "Help : Displays this help screen\n"; 
    std::cout << "   Example : h\n";
    std::cout << "Quit : Exits the program\n";
    std::cout << "   Example : q\n";
} 
/*
 * menu
 * function Displays tools list
 * Accepts no parameters
 * Returns the character entered by the user 
 */
char menu() {
    
    std::cout << " ===== (A) Add, (S) Subtract, (P) Print, (H) Help, (Q) Quit ===== \n" ;// Display a menu
    char ch ; // Returns char entered by user
    std::cin >> ch;
    return ch;
}
/* main
 * Runs a command loop that allows users to perform 
 * Simple arithmetic 
 */

int main() {
    double result = 0.0, arg1, arg2;
    bool done = false; // Initially not done 
  do {
     switch(menu()) {
        case 'a' : // Addition
        case 'A' :
            std::cin >> arg1 >> arg2;
            result = arg1 + arg2 ;
            std::cout << result << '\n';
            break;
        case 's' : // Subtraction
        case 'S' :
            std::cin >> arg1 >> arg2;
            result = arg1 - arg2 ; // fall-through so it prints the result
        case 'p' : // Displays the result of the latest operation
        case 'P' :
            std::cout << result << '\n';
            break;
        case 'h' : // Display help screen
        case 'H' :
            help_screen();
            break;
        case 'q' : // Exits the program
        case 'Q' :
            done = true;
            break;
        }
    }
  while(!done);
    return 0;
}