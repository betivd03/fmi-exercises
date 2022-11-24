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

void printMatrix(int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cout << arr[i][j] << " ";
        }

        std::cout << std::endl;
    }
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

    printMatrix(arr, rowSize, columnSize);
}