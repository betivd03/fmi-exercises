#include <iostream>

const int max_length = 7;

bool findpairs(int arr[], int n, int index)
{
    for (int i = 0; i < max_length; i++)
    {
        if (arr[i] == n && i != index)
        {
            return true;
        }
    }

    return false;
}

int findsinglenumber(int arr[])
{
    bool issingle = false;

    for (int i = 0; i < max_length; i++)
    {
        issingle = findpairs(arr, arr[i], i);

        if (!issingle)
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[max_length];

    for (int i = 0; i < max_length; i++)
    {
        int n;
        std::cin >> n;

        arr[i] = n;
    }

    std::cout << findsinglenumber(arr);
}