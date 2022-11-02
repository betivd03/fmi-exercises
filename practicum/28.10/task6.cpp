#include <iostream>

double sideOfTriangle(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double findPerimeterOfTriangle(double xa, double ya, double xb, double yb, double xc, double yc)
{
	double a = sideOfTriangle(xb, yb, xc, yc);
	double b = sideOfTriangle(xa, ya, xc, yc);
	double c = sideOfTriangle(xa, ya, xb, yb);

	if ((a + b <= c) || (b + c <= a) || (a + c <= b))
	{
		throw "This triangle doesn't exist.";
	}

	return a + b + c;
}

int main()
{
	double xa, ya, xb, yb, xc, yc;
	std::cin >> xa >> ya >> xb >> yb >> xc >> yc;

	try
	{
		std::cout << findPerimeterOfTriangle(xa, ya, xb, yb, xc, yc);
	}
	catch (const char* e)
	{
		std::cout << e;
	}
}