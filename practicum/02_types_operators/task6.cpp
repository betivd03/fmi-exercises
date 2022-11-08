#include <iostream>

int main()
{
    char ch1, ch2, ch3;
    std::cin >> ch1 >> ch2 >> ch3;

    int num1 = (int)ch1;
    int num2 = (int)ch2;
    int num3 = (int)ch3;

    std::cout << num1 << num2 << num3;
}