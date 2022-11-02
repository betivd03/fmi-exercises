#include <iostream>

std::string romanNumber(int n)
{
	if (n < 0)
	{
		throw "This number is negative.";
	}

	std::string result = "";

	while (n > 0)
	{
		if (n - 1000 >= 0)
		{
			result += "M";
			n -= 1000;
		}
		else if (n - 900 >= 0)
		{
			result += "CM";
			n -= 900;
		}
		else if (n - 500 >= 0)
		{
			result += "D";
			n -= 500;
		}
		else if (n - 400 >= 0)
		{
			result += "CD";
			n -= 400;
		}
		else if (n - 100 >= 0)
		{
			result += "C";
			n -= 100;
		}
		else if (n - 90 >= 0)
		{
			result += "XC";
			n -= 90;
		}
		else if (n - 50 >= 0)
		{
			result += "L";
			n -= 50;
		}
		else if (n - 40 >= 0)
		{
			result += "XL";
			n -= 40;
		}
		else if (n - 10 >= 0)
		{
			result += "X";
			n -= 10;
		}
		else if (n - 9 >= 0)
		{
			result += "IX";
			n -= 9;
		}
		else if (n - 5 >= 0)
		{
			result += "V";
			n -= 5;
		}
		else if (n - 4 >= 0)
		{
			result += "IV";
			n -= 4;
		}
		else if (n - 1 >= 0)
		{
			result += "I";
			n -= 1;
		}
	}

	return result;
}

int main()
{
	int n;
	std::cin >> n;

	try
	{
		std::cout << romanNumber(n);
	}
	catch (const char* e)
	{
		std::cout << e;
	}
}