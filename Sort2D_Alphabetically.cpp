#include <iostream>
#include <string.h>

using namespace std;

void rotateleft(char str[]);
char st[50];
char ar[50][50];
void sort2DAlphabetically(char arr[][50] , int rows);

int main()
{
	//char st[50];
	int strLength = 0;
	//char ar[50][50];


	cout << "Enter the string: ";
	cin >> st;


	for(int i = 0 ; st[i] != '\0' ; i++)
	{
		strLength++;

	}
	cout << strLength;

	for(int i = 0 ; i <= strLength ; i++)
	{
		rotateleft(st);
		strcpy(ar[i], st);


	}

	system("pause");
}

void rotateleft(char str[])
{
	int val = 0;

	char temp;
		for(int i = 0 ; str[i] != '\0' ; i++)  //Loop to calculate the length of the string 
	{
		val++;

	}

	for(int i = 0; i < val ; i++)  //Loop to rotate left
	{
		for(int j = 0; j < val; j++)
		{

		ar[i][j] = str[j];
		cout << ar[i][j];

		}
		cout << endl;
		for(int i = 0 ; i <val ; i++)
		{
		temp = str[i];
		str[i] = str[i + 1];
		str[val - 1] = temp;
		}
	}





}
void sort2DAlphabetically(char arr[][50] , int rows)
{
int val = 0;

	char temp;
		for(int i = 0 ; str[i] != '\0' ; i++)  //Loop to calculate the length of the string
	{
		val++;

	}
	for(int i = 0; 






}