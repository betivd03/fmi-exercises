#include <iostream>

void up(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;

    up(n);
}