#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n > 0)
    {
        int m = n % 2;
        std::cout << m;
        n /= 2;
    }
}