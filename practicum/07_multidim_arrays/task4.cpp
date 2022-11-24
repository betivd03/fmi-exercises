#include <iostream>

const int MAX_SIZE = 100;

void initializeMatrix(int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

int findTheBiggestElement(int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    int maxElement = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > maxElement)
            {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

int main()
{
    int rowSize, columnSize;

    std::cout << "Rows: ";
    std::cin >> rowSize;

    std::cout << "Columns: ";
    std::cin >> columnSize;

    int arr[MAX_SIZE][MAX_SIZE];

    initializeMatrix(arr, rowSize, columnSize);

    std::cout << "The biggest element of the matrix is: " << findTheBiggestElement(arr, rowSize, columnSize);
}