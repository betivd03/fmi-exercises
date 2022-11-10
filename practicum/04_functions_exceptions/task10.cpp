#include <iostream>

void changeValues(int a, int b)
{
	int c = a;
	a = b;
	b = c;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	changeValues(a, b);
}