#include <iostream>
/*
* get_int_range(first,last) 
* Forces the user to enter an integer within 
* specified range
* first is either a minimum or maximum acceptable value 
* last is the corresponding other end of the range ,value
* Returns an acceptable value from the user
*/
int get_int_range(int first , int last) { 
    // If the larger number is provided first, 
    // switch the parameters
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }
    // Insist on values in the range first .... last
    std::cout << "Please, Enter value in range " << first << "..." << last << " :";
    int in_value = 0; // User input value
    bool bad_entry ;
    do {
        std::cin >> in_value ;
        bad_entry = (in_value < first || in_value > last);
        if (bad_entry) {
            std::cout << in_value << " is not in the range " << first << "..." << last
            << "\nPlease try again: ";
        }
  
    }
    while (bad_entry);
    // in_value in this point is guaranteed to be within range
    return in_value;
}
int main() {
    std::cout << get_int_range(10, 20) << '\n';
    std::cout << get_int_range(40, 20) << '\n';
    std::cout << get_int_range(15, 30) << '\n';
    std::cout << get_int_range(10, 20) << '\n';
    std::cout << get_int_range(-100, 100) << '\n';
} 