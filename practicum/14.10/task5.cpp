#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    int c = n % 10;
    n /= 10;
    int d = n % 10;

    std::cout << a << "&" << b << "&" << c << "&" << d;
}