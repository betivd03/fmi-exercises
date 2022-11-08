#include <iostream>

int leastCommonMultiple(int a, int b)
{
	int c;

	if (a > b)
	{
		c = a;
	}
	else
	{
		c = b;
	}

	while ((a * b) <= c)
	{
		if (c % a == 0 && c % b == 0)
		{
			return c;
		}
		c++;
	}
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << leastCommonMultiple(a, b);
}