#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    int sum = x + y;
    int diff = x - y;
    int mult = x * y;
    int div = x % y;

    std::cout << "sum=" << sum << std::endl;
    std::cout << "diff=" << diff << std::endl;
    std::cout << "mult=" << mult << std::endl;
    std::cout << "div=" << div << std::endl;
}