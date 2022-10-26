#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        int digit = n % 10;

        if (i == k)
        {
            std::cout << digit;
            break;
        }

        n /= 10;
    }
}