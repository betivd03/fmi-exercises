#include <iostream>

int main()
{
    int n, sum;
    std::cin >> n;
    sum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        sum += num;
    }

    double result = (double)sum / n;

    std::cout << result;
}