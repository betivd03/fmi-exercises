#include <iostream>

char findCapitalLetter(char ch)
{
	if (ch >= 97 && ch <= 122)
	{
		int diff = 'a' - 'A';
		return ch - diff;
	}

	return ch;
}

int main()
{
	char ch;
	std::cin >> ch;
	std::cout << findCapitalLetter(ch);
}