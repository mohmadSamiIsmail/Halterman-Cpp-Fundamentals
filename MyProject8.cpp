#include <iostream>
int main()
{
    int count = 1; // Initialize counter
start:
    std::cout << "Count is: " << count << "\n"; // Label to jump to
    count++;
    if (count > 5)
    {
        goto end; // Exit loop if count exceeds 5
    }
    goto start;
end: // Label to jump to
    std::cout << "Counting finished.\n";
    return 0;
}