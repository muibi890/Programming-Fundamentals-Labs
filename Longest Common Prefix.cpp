#include <iostream>

using namespace std;

const int rows = 5 , cols = 30;

void LongestCommonPrefix(char arr[][cols], int rows);

int main()
{
	char arr[rows][cols] = {"CharacterLess" , "Character" , "CharArray" , "CharteredAccountant" };

	LongestCommonPrefix(arr, rows);
	system("pause");


	return 0;



	
}

void LongestCommonPrefix(char arr[][cols], int rows)
{
	char out[20] = "Hello";
	int a;

	char temp;
	int count = 0;


	for(int i = 0 ; i < cols ; i++)
	{
		a = 0;

		for(int j = 0 ; j < rows; j++)
		{
			temp = arr[j][i];

			if(temp == arr[j+1][i])
			{

			out[i] = arr[j][i];
			cout << out[i];
			a++;
			}

		}
		
	count++;

		
	}
	

	cout << "Output:";

	for(int i = 0; i < count ; i++)
	{
		cout  << out[i];
	}







}