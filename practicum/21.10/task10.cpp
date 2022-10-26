#include <iostream>

int main()
{
    int n, counter, num;
    std::cin >> n;
    counter = 0;
    num = 0;

    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;
        num += digit * pow(2, counter);
        counter++;
    }

    std::cout << num;
}