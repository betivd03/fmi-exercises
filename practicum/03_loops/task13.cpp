#include <iostream>

int main()
{
    int firstNum, secondNum, digit, num;
    std::cin >> firstNum;
    secondNum = 0;
    num = firstNum;

    while (firstNum > 0)
    {
        digit = firstNum % 10;
        secondNum = (secondNum * 10) + digit;
        firstNum /= 10;
    }

    if (num == secondNum)
    {
        std::cout << "The number is a palindrome.";
    }
    else
    {
        std::cout << "The number isn't a palindrome.";
    }
}