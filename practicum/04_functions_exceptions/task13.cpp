#include <iostream>

void findPairs(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			std::cout << "(" << i << "," << j << ")" << std::endl;
		}
	}
}

int main()
{
	int n;
	std::cin >> n;

	findPairs(n);
}