#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    bool isLastDigitBigger = true;

    while (number > 0)
    {
        int lastDigit = number % 10;
        number /= 10;
        int previousDigit = number % 10;

        if (lastDigit < previousDigit)
        {
            isLastDigitBigger = false;
            break;
        }
    }

    if (isLastDigitBigger == true)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
}