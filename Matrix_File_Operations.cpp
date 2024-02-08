#include <iostream>	
#include <fstream>
using namespace std;
const int COLSIZE = 3;

void InputArray(int arr[][COLSIZE], int totalRows);     //here COLSIZE is declared as a global constant
void OutputArray(int arr[][COLSIZE], int totalRows);  //here COLSIZE is declared as a global constant
void InputArray(int arr[][COLSIZE], int totalRows, char filename[]);
void OutputArray(int arr[][COLSIZE], int totalRows, char filename[]);

int main()
{
	int choice;
	char out;
	char fn[100];

	const int tr = 3;
	int arr[tr][COLSIZE];


	cout << "MENU" << endl;
	cout << "1. Input the values for the array: " << endl;
	cout << "2. Input the values from the file: " << endl;

	cin >> choice;
	if (choice == 1)
	{
		InputArray(arr , tr);
		cout << "Do you want to output the values for the array:(Y/N) " << endl;
		cin >> out;
		if (out == 'y' || out == 'Y')
			OutputArray(arr , tr);

	}
	else if (choice == 2)
	{
		cout << "Enter the name of the file: ";
		cin.getline(fn, '.txt');
		InputArray(arr, tr, fn);
		cout << "Do you want to Output the array to a file: " << endl;
		cin >> out;
		if (out == 'y' || out == 'Y')
			OutputArray(arr, tr , fn);
	}
}

void InputArray(int arr[][COLSIZE], int totalRows)
{
	for (int i = 0; i < totalRows; i++)
	{
		cout << "Data input for row number " << i << endl;
		for (int j = 0; j < COLSIZE; j++)
		{
			cin >> arr[i][j];
			//cout << " ";


		}
		cout << endl;

	}
}

void OutputArray(int arr[][COLSIZE], int totalRows)
{
	for (int i = 0; i < totalRows; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			cout << arr[i][j];
			cout << " ";


		}
		cout << endl;

	}
}
void InputArray(int arr[][COLSIZE], int totalRows, char filename[])
{
	ifstream fin;
	fin.open("input.txt");
	if (!fin)
		cout << "Error! The name of the file isn't correct:";
	else
	{
		while (!fin.eof())
		{
			for (int i = 0; i < totalRows; i++)
			{
				for (int j = 0; j < COLSIZE; j++)
				{
					fin >> arr[i][j];
				}

			}
		}
		fin.close();

	}
}

void OutputArray(int arr[][COLSIZE], int totalRows, char filename[])
{
	ofstream fout;
	fout.open("outputfile.txt");
	if (!fout)
		cout << "Error! The name of the file isn't correct:";
	else
	{
		
			for (int i = 0; i < totalRows; i++)
			{
				for (int j = 0; j < COLSIZE; j++)
				{
					fout << arr[i][j] << " ";
				}
				fout << endl;


			}
		
			fout.close();

	}
}

