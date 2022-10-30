#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        if (m >= 1 && m <= 1000)
        {
            if (m < minNum)
            {
                minNum = m;
            }

            if (m > maxNum)
            {
                maxNum = m;
            }
        }
        else {
            std::cout << "The number isn't in the given range!" << std::endl;
            break;
        }
    }

    std::cout << "Min number: " << minNum << std::endl;
    std::cout << "Max number: " << maxNum << std::endl;
}