#include <iostream>

bool isNumber(char ch)
{
	if (ch >= 48 && ch <= 57)
	{
		return true;
	}

	return false;
}

int main()
{
	char ch;
	std::cin >> ch;

	if (isNumber(ch) == true)
	{
		std::cout << "This char is a number";
	}
	else
	{
		std::cout << "This char isn't a number";
	}
}