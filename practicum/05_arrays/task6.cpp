#include <iostream>

const int max_length = 5;

bool iscontains(int arr[], int n)
{
    for (int i = 0; i < max_length; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }

    return false;
}

bool searchfornumbers(int arr[], int a, int b)
{
    bool iscontainsnumber = false;

    for (int i = a; i <= b; i++)
    {
        iscontainsnumber = iscontains(arr, i);

        if (!iscontainsnumber)
        {
            return iscontainsnumber;
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

    int a, b;
    std::cin >> a >> b;

    std::cout << std::boolalpha << searchfornumbers(arr, a, b);
}