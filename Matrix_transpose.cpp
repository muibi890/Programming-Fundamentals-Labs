#include <iostream>
using namespace std;

int main() {
    int a[10][10], t[10][10]; 
    int row, column, i, j;


    cout << "Enter the number of rows of the matrix: ";
    cin >> row;
    cout << endl;
    cout << "Enter the number of columns of the matrix: ";
    cin >> column;
    cout << endl;


    cout << "Enter elements of matrix: " << endl;

    //storing the values for the matrix
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "Enter element : ";
            cin >> a[i][j];
        }
    }

    // Displaying the original the matrix
    cout << "\nEntered Matrix: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << " " << a[i][j];
            if (j == column - 1)
                cout << endl << endl;
        }
    }

    // Computing transpose of the matrix
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j) {
            t[j][i] = a[i][j];
        }

    // Displaying the transpose
    cout << "\nt of Matrix: " << endl;
    for (int i = 0; i < column; ++i)
        for (int j = 0; j < row; ++j) {
            cout << " " << t[i][j];
            if (j == row - 1)
                cout << endl << endl;
        }

    return 0;
}