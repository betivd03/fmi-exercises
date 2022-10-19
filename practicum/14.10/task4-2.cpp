#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int c = 0;
    c = a;
    a = b;
    b = c;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}