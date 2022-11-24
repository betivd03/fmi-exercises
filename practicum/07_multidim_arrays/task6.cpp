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

void transposition(int trasposed[MAX_SIZE][MAX_SIZE], int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            trasposed[i][j] = arr[j][i];
        }
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
    int transposed[MAX_SIZE][MAX_SIZE];

    initializeMatrix(arr, rowSize, columnSize);
    transposition(transposed, arr, rowSize, columnSize);
    printMatrix(transposed, columnSize, rowSize);
}