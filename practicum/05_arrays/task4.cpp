#include <iostream>
#include <cmath>

bool isPrime(int n)
{
    double m = sqrt(n);

    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    const int MAX_LENGTH = 5;
    int arr[MAX_LENGTH];

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        int n;
        std::cin >> n;

        arr[i] = n;
    }

    int counter = 0;

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        int num = arr[i];

        if (isPrime(num))
        {
            counter++;
            std::cout << num << " ";
        }
    }

    std::cout << std::endl << counter;
}