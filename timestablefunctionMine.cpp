#include <iostream>
#include <iomanip>
// Print the column labels for an n x n multiplication table.
void col_numbers(int n) {
    std::cout << "      ";
    for(int column = 1; column <= n; column++) {
        std::cout << std::setw(4) << column;
    }
    std::cout << '\n';
}
//Prints the separator line below column number
void col_line(int n) {
    std::cout << "     +";
    for (int column = 1; column <= n; column++) {
        std::cout << "----";
    }
    std::cout << '\n';
}
// Prints the complete table header (numbers + separator)
void col_header(int n) {
    col_numbers(n);
    col_line(n);
}
// Prints the row label on the left side
void row_header(int n) {
    std::cout << std::setw(4) << n << " |";
}
// Prints a single row with its header and multiplication products
void print_row(int row, int column) {
    row_header(row);
    for(int col = 1; col <= column; col++){
        std::cout << std::setw(4) << row * col;

    }
}
void print_contents(int n) {
    for (int current_row = 1; current_row <= n; current_row++) {
    print_row(current_row, n);
    std::cout << '\n';
}
}
void timestable(int n) {
    col_header(n);
    print_contents(n);
}
// Forces the user to enter an integer within a
// specified range first is either a minimum or maximum
// acceptable value last is the corresponding other end
// of the range, either a maximum or minimum value
// Returns an acceptable value from the user
int get_int_range(int first, int last) {
// If the larger number is provided first,
// switch the parameters
if (first > last) {
int temp = first;
first = last;
last = temp;
}
// Insist on values in the range first...last
std::cout << "Please enter a value in the range "
<< first << "..." << last << ": ";
int in_value; // User input value
bool bad_entry;
do {
std::cin >> in_value;
bad_entry = (in_value < first || in_value > last);
if (bad_entry) {
std::cout << in_value << " is not in the range "
<< first << "..." << last << '\n';
std::cout << "Please try again: ";
}
}
while (bad_entry);
// in_value at this point is guaranteed to be within range
return in_value;
}
int main () {
int size = get_int_range(1, 20);
timestable(size);
}