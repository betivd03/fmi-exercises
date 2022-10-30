#include <iostream>

int findSum(int m, int n)
{
    if (m > n)
    {
        throw "m is bigger than n";
    }

    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int m, n;
    std::cin >> m >> n;

    try
    {
        std::cout << findSum(m, n);
    }
    catch (const char* e)
    {
        std::cout << e;
    }
}