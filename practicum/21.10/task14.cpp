#include <iostream>

int main()
{
    int n, m, minNum, result, divider;
    std::cin >> n >> m;

    minNum = n > m ? m : n;
    result = 1;
    divider = 2;

    while (divider <= minNum)
    {
        if ((n % divider == 0) && (m % divider == 0))
        {
            result *= divider;
            n /= divider;
            m /= divider;
        }
        else
        {
            divider++;
        }
    }

    std::cout << result;
}