#include <iostream>
using namespace std;
int main()
{
	const int row = 3;
	const int col = 3;
	int arr[row][col];
	int sum =0;
	int avg;


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col-1; j++)
		{
			cout << "Enter the values for the " << j << " column: ";

			cin >> arr[i][j];

		}
	}
	for (int i = 0; i < row; i++)
	{
		sum = 0;

		for (int j = 0; j < col - 1; j++)
		{
			sum = sum + arr[i][j];
			arr[i][2] = sum;
			

		}
		cout <<"The total marks of student number " << i << " are "<< arr[i][2] << endl;

	}
	for (int i = 0;i < row; i++)
	{
				int max = arr[i][i];
				for (int j = 0; j <= col-1; j++)
				{
					if (arr[j][i] > max)
					{
						max = arr[j][i];
					}
				}
				cout << "The maximum marks for quiz number " << i << " are " << max << endl;

		
	}
	for (int i = 0;i < row; i++)
	{
				int min = arr[i][i];
				for (int j = 0; j < col; j++)
				{
					if (arr[j][i] < min)
					{
						min = arr[j][i];
					}
				}
				cout << "The minimum marks for quiz number " << i << " are " << min << endl;

		
	}
	for (int i = 0;i < row; i++)
	{
		int s = 0;

				for (int j = 0; j < col; j++)
				{
					s = s + arr[j][i];

					
				}
				avg = s / (row);

				cout << "The average marks for quiz number " << i << " are " << avg << endl;

		
	}
	
	int ar[col];

	for (int i = 0;i < row; i++)
			{
				int ma = arr[i][col];
				for (int j = 0; j < col; j++)
				{
					if (arr[i][col] > ma)
					{
						ma = arr[i][col];
					}
				}
				ar[i] = ma;
		
			}
	for (int i = 0; i < col; i++)
	{
		cout << "Maximum total value " << ar[col] << " " << endl;

	}
	
	return 0;

}
