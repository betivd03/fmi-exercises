#include <iostream>

void down(int n)
{
    for (int i = n; i >= 1; i--)
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

void up(int n)
{
    for (int i = 2; i <= n; i++)
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

    down(n);
    up(n);
}