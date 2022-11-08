#include <iostream>

int findAbsoluteValue(int n)
{
	if (n < 0)
	{
		return 0 - n;
	}

	return n;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << findAbsoluteValue(n);
}