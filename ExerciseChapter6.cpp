#include <iostream>

int main()
{
    int count = 0; // intialize counter
    while (count <= 16)
    {
        std::cout << "Count is: " << count << "\n"; // Label to jump to
        count += 2; // Increment counter by 2
    }
}