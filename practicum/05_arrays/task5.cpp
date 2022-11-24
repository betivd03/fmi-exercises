#include <iostream>

const int MAX_LENGTH = 5;

void fillArray(int arr[], int a, int b)
{
    if (a > b)
    {
        throw "This interval doesn't exist";
    }

    int counter = 0;

    for (int i = a; i <= b; i++)
    {
        if (counter >= MAX_LENGTH)
        {
            break;
        }

        arr[counter] = i;
        counter++;
    }

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int arr[MAX_LENGTH];

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        int n;
        std::cin >> n;

        arr[i] = n;
    }

    int a, b;
    std::cin >> a >> b;

    try
    {
        fillArray(arr, a, b);
    }
    catch (const char* e)
    {
        std::cout << e;
    }
}