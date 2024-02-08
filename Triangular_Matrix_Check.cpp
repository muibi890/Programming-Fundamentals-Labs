#include <iostream>

using namespace std;
const int N = 4;

// Function to check matrix is upper triangular or not
bool isUpperTriangularmatrix(int matrix[N][N])
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}
// Function to check matrix is lower triangular or not 
bool isLowerTriangularmatrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (matrix[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int matrix[N][N] = { { 1, 3, 5, 3 },
                      { 0, 4, 6, 2 },
                      { 0, 0, 2, 5 },
                      { 0, 0, 0, 6 } };
    if (isUpperTriangularmatrix(matrix))
        cout << "Yes the matrix is upper triangular";
    else if (isLowerTriangularmatrix(matrix))
        cout << "Yes the matrix is lower triangular";
    else
        cout << "matrix is a square matrix";

    return 0;
}