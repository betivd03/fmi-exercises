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

    int minNum = INT_MAX;

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    std::cout << minNum;
}