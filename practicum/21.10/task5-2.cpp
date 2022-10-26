#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;

    for (int i = m; i <= n; i += 3)
    {
        std::cout << i << std::endl;
    }
}