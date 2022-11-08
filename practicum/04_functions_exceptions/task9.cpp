#include <iostream>

int greatestCommonDivisor(int a, int b) {
    int c;
    while ((a % b) > 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << greatestCommonDivisor(a, b);
}