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

void multipleMatrixWithScalar(int arr[MAX_SIZE][MAX_SIZE], int row, int column, int scalar)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] *= scalar;
        }
    }
}

int main()
{
    int rowSize, columnSize, scalar;

    std::cout << "Scalar: ";
    std::cin >> scalar;

    std::cout << "Rows: ";
    std::cin >> rowSize;

    std::cout << "Columns: ";
    std::cin >> columnSize;

    int arr[MAX_SIZE][MAX_SIZE];

    initializeMatrix(arr, rowSize, columnSize);
    multipleMatrixWithScalar(arr, rowSize, columnSize, scalar);
    printMatrix(arr, rowSize, columnSize);
}