#include <iostream>
using namespace std;

void printingarray(int a[][3], int s);


int main()
{
	const int size = 3;
	int arr[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter the value of column number " << j << " row number " << i << ":" << endl;
			cin >> arr[i][j];

		}
	}
	printingarray(arr, size);

 
}

void printingarray(int a[][3], int s)
{
	cout << "Middle Row is: ";   // printing the mid row
	for (int i = 0;i < s;i++)
	{
		for (int j = 0;j < s;j++)
		{
			if (i == s / 2)
				cout << a[i][j] << "\t";
		}
	}
	cout << "\nMiddle Column is: ";    // printing the mid col
	for (int i = 0;i < s;i++)
	{
		for (int j = 0;j < s;j++)
		{
			if (j == s / 2)
				cout << a[i][j] << "\t";
		}
	}

}
