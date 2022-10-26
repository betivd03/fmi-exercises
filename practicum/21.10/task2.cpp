#include <iostream>

int main()
{
    int num, newNum;
    std::cin >> num;
    newNum = 0;

    while (num > 0)
    {
        newNum *= 10;
        int digit = num % 10;
        newNum += digit;
        num /= 10;
    }

    std::cout << newNum;
}