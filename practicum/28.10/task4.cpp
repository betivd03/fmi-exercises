#include <iostream>

double findDistance(double xa, double ya, double xb, double yb)
{
	return sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
}

int main()
{
	double xa, ya, xb, yb;
	std::cin >> xa >> ya >> xb >> yb;
	std::cout << findDistance(xa, ya, xb, yb);
}