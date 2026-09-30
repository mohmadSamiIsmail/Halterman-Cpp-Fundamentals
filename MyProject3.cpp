#include <iostream>

int main()
{
    char first = 'A';
    while (first <= 'C')
    {
        char second = 'A';
        while (second <= 'C')
        {
            if (first != second)
            {
                char third = 'A';
                while (third <= 'C')
                {
                    if (third != first && third != second)
                    {
                        std::cout << first << second << third << std::endl;
                    }
                    third++;
                }
            }
            second++;
        }
        first++;
    }
    return 0;
}