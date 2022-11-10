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

    int reversedArr[MAX_LENGTH];

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        reversedArr[i] = arr[MAX_LENGTH - 1 - i];
    }

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        std::cout << reversedArr[i] << " ";
    }
}