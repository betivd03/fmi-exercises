#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int counterOfZeros = 0;
    int counterOfOnes = 0;

    while (n > 0)
    {
        int m = n % 2;
        n /= 2;

        if (m == 0)
        {
            counterOfZeros++;
        }
        else
        {
            counterOfOnes++;
        }
    }

    std::cout << "Count of 0:" << counterOfZeros << std::endl;
    std::cout << "Count of 1:" << counterOfOnes << std::endl;
}