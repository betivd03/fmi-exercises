#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n > 0)
    {
        int digit = n % 10;
        std::cout << digit << std::endl;
        n /= 10;
    }
}