#include <iostream>

int main()
{
    int x = 1;
    while (x <= 3)
    {
        int y = 1;
        while (y <= 3)
        {
            if (x + y == 5)
            {
                  std::cout << "Test: x=" << x << ", y=" << y << '\n';
                goto stop_search;

            }
          
            y++;
        }
        x++;
    }
stop_search:
    std::cout << "Search Over\n";
    return 0;
}