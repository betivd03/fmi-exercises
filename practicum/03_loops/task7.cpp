#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << std::endl;
        }
    }
}