#include <iostream>
using namespace std;
int main()
{
	const int ro = 3;
	const int col = 3;
	int arr[ro][col];
	int mar[8];

	//Populating the 2D array;

	for (int i = 0; i < ro; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the values for the " << j << " column: ";

			cin >> arr[i][j];

		}
	}
	//Finding out max value in each column

	for (int i = 0;i < ro; i++)
	{
		int max = arr[i][i];
		for (int j = 0; j < col; j++)
		{
			if (arr[j][i] > max)
			{
				max = arr[j][i];
			}
		}
		mar[i] = max;

	}
	for (int j = 0; j < col; j++)
	{
		cout << mar[j] << " ";

		
	}
	return 0;

}