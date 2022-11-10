#include <iostream>

void returnNumber()
{
	int n;

	do
	{
		std::cin >> n;
	} while (n < 100);

	std::cout << n;
}

int main()
{
	returnNumber();
}