#include <iostream>

int main()
{
    int n, k, counter, num;
    counter = 0;
    std::cin >> n >> k;
    num = n;

    while (num > 0)
    {
        num /= 10;
        counter++;
    }

    for (int i = 0; i <= counter - k; i++)
    {
        int digit = n % 10;

        if (i == counter - k)
        {
            std::cout << digit;
            break;
        }

        n /= 10;
    }
}