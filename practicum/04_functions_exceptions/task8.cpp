#include <iostream>

double divisionBetweenTwoNumbers(int n, int m)
{
	if (m == 0)
	{
		throw "It's not divisible by zero.";
	}

	return (double)n / m;
}

int main()
{
	int n, m;
	std::cin >> n >> m;

	try
	{
		std::cout << divisionBetweenTwoNumbers(n, m);
	}
	catch (const char* e)
	{
		std::cout << e;
	}
}