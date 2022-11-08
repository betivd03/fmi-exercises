#include <iostream>

void downFunc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i == j) || (i == 2 * n - j))
            {
                std::cout << i;
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}

void upFunc(int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i == j) || (i == 2 * n - j))
            {
                std::cout << i;
            }
            else
            {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;

    downFunc(n);
    upFunc(n);
}