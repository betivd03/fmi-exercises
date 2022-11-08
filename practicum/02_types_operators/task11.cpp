#include <iostream>

int main()
{
    int year;
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        std::cout << year << " is a leap year.";
    }
    else
    {
        std::cout << year << " isn't a leap year.";
    }
}