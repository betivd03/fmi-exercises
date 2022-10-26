#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int counter = 0;

    while (x > 0)
    {
        int digit = x % 10;
        if (digit == 7)
        {
            counter++;
        }

        x /= 10;
    }

    std::cout << counter;
}