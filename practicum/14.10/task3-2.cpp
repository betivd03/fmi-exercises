#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2;
    double areaByHeronsFormula = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "Area by Heron's formula is: " << areaByHeronsFormula << std::endl;
}