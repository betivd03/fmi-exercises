#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == false)
    {
        std::cout << "This number isn't prime.";
    }
    else
    {
        std::cout << "This number is prime.";
    }
}