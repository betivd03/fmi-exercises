#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;
    int numOfChar = (int)ch;

    if (numOfChar >= 48 && numOfChar <= 57)
    {
        std::cout << "This is a number.";
    }
    else if (numOfChar >= 65 && numOfChar <= 90)
    {
        std::cout << "This is a capital letter.";
    }
    else if (numOfChar >= 97 && numOfChar <= 122)
    {
        std::cout << "This is a small letter.";
    }
    else
    {
        std::cout << "This is a symbol.";
    }
}