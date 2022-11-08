#include <iosstream>

double findPower(double x, int n)
{
	double result = 1.0;

	for (int i = 1; i <= n; i++)
	{
		result *= x;
	}

	return result;
}

int main()
{
	double x;
	int n;
	std::cin >> x >> n;

	std::cout << findPower(x, n);
}