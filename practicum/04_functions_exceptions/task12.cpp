#include <iostream>

int findSum(int n)
{
	int sum = 0;

	while (n > 0)
	{
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}

	return sum;
}

int findProduct(int n)
{
	int product = 1;

	while (n > 0)
	{
		int digit = n % 10;
		product *= digit;
		n /= 10;
	}

	return product;
}

void findSpecialNumbers(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (findSum(i) == findProduct(i))
		{
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a <= b)
	{
		findSpecialNumbers(a, b);
	}
	else
	{
		std::cout << "This interval doesn't exist!";
	}
}