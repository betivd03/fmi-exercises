#include <iostream>

int main()
{
    const int MAX_LENGTH = 5;
    int arr[MAX_LENGTH];

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        int n;
        std::cin >> n;

        arr[i] = n;
    }

    int sum = 0;

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        sum += arr[i];
    }

    double result = (double)sum / MAX_LENGTH;

    std::cout << result;
}