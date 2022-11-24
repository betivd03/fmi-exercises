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

void sumOfMatrixes(int arr1[MAX_SIZE][MAX_SIZE], int row1, int column1, int arr2[MAX_SIZE][MAX_SIZE], int row2, int column2)
{
    if ((row1 != row2) || (column1 != column2))
    {
        throw "These matrixes don't have sum!";
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
}

int main()
{
    int rowSize1, columnSize1, rowSize2, columnSize2;

    std::cout << "First matrix" << std::endl;

    std::cout << "Rows: ";
    std::cin >> rowSize1;

    std::cout << "Columns: ";
    std::cin >> columnSize1;

    std::cout << "Second matrix" << std::endl;

    std::cout << "Rows: ";
    std::cin >> rowSize2;

    std::cout << "Columns: ";
    std::cin >> columnSize2;

    int arr1[MAX_SIZE][MAX_SIZE], arr2[MAX_SIZE][MAX_SIZE];

    initializeMatrix(arr1, rowSize1, columnSize1);
    initializeMatrix(arr2, rowSize2, columnSize2);

    try
    {
        sumOfMatrixes(arr1, rowSize1, columnSize1, arr2, rowSize2, columnSize2);
        printMatrix(arr1, rowSize1, columnSize1);
    }
    catch (const char* e)
    {
        std::cout << e;
    }
}