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

    int maxNum = INT_MIN;

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    std::cout << maxNum;
}