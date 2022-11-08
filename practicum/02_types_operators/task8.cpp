#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int counter = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((i % 3 == 0 && i % 5 == 0) || i % 3 == 0 || i % 5 == 0)
        {
            counter++;
        }
    }

    std::cout << counter;
}