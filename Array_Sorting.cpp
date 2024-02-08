#include <iostream>
using namespace std;

int main()
{
	int arr[10] ;
	int count = 0;
	int temp;

	

	while(count < 10 && arr[count] != -1)
	{
		cout << "Enter the value :";
		cin >> arr[count];
		count++;

	}

	cout << "Your valid entries are " << count << endl;

	for(int i = 0; i < count; i++)
	{
		for(int j = 1 ; j < count - i; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}


	}
	cout << "Sorted array: ";
	for(int i = 0; i < count ; i++)
	{
	
		cout << arr[i] << " , ";

	}
	int k;

	cout << "Now enter k: ";
	cin >> k;
	cout << "The Kth Smallest value is: ";
	cout << arr[k];

	system("pause");


	return 0;

}