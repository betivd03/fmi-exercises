#include <cstdlib>
#include <iostream>
#include <time.h>

int computerNumber()
{
	srand(time(0));
	int r = rand();

	return r;
}

void compareNumbers(int r, int n)
{
	if (r < n)
	{
		std::cout << "Your number is bigger than computer's number!" << std::endl;
	}
	else if (r > n)
	{
		std::cout << "Your number is smaller than computer's number!" << std::endl;
	}
}

void play(int r, int n)
{
	while (r != n)
	{
		compareNumbers(r, n);
		std::cin >> n;
	}
}

int main()
{
	int randomNumber = computerNumber();

	int myNumber;
	std::cin >> myNumber;

	play(randomNumber, myNumber);

	std::cout << "You guessed the number!";
}