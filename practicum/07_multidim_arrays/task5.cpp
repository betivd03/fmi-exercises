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

int findTheBiggestRow(int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    int theBiggestSum = 0;
    int numOfRow = 0;

    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < column; j++)
        {
            rowSum += arr[i][j];
        }

        if (rowSum > theBiggestSum)
        {
            theBiggestSum = rowSum;
            numOfRow = i;
        }
    }

    return numOfRow + 1;
}

int findTheBiggestColumn(int arr[MAX_SIZE][MAX_SIZE], int row, int column)
{
    int theBiggestSum = 0;
    int numOfColumn = 0;

    for (int i = 0; i < row; i++)
    {
        int columnSum = 0;

        for (int j = 0; j < column; j++)
        {
            columnSum += arr[j][i];
        }

        if (columnSum > theBiggestSum)
        {
            theBiggestSum = columnSum;
            numOfColumn = i;
        }
    }

    return numOfColumn + 1;
}

int main()
{
    int size;

    std::cout << "Size: ";
    std::cin >> size;

    int arr[MAX_SIZE][MAX_SIZE];

    initializeMatrix(arr, size, size);

    int row = findTheBiggestRow(arr, size, size);
    int column = findTheBiggestColumn(arr, size, size);

    std::cout << "Row: " << row << std::endl;
    std::cout << "Column: " << column << std::endl;
}