#include <iostream>

int main()
{
    int n, firstNum, secondNum, thirdNum;
    std::cin >> n;
    firstNum = 0;
    secondNum = 1;

    if (n == 1)
    {
        std::cout << firstNum;
    }
    else if (n > 1)
    {
        for (int i = 1; i <= n - 2; i++)
        {
            thirdNum = secondNum;
            secondNum += firstNum;
            firstNum = thirdNum;
        }

        std::cout << secondNum;
    }
    else
    {
        std::cout << "n must be a positive number!";
    }
}