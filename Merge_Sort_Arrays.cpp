#include <iostream>
using namespace std;
void mergeArrays(int const arr1[], int const arr2[], int const size1, int const size2, int arr3[]);

int main(){
int ar1[50], ar2[50], ar3[100];
	int n , k;
	
	cout << "Enter the number of elements you want to enter in the first array: ";
	cin >> n;
	
	for(int i=0;i<n;i++)

	{

		cout<<"Enter element " <<i+1<< ":";

		cin>>ar1[i];

	}
	
	for(int i=0;i<n;i++)
	{		
	int j,temp;
		for(j=i+1;j<n;j++)
		{
			if(ar1[i]>ar1[j])
			{
				temp  = ar1[i];
				ar1[i] =ar1[j];
				ar1[j] =temp;
			}
		}
	}
	
	
	cout<<"Sorted elements of first array:"<<endl;
	for(int i=0;i<n;i++)
		cout<< ar1[i] <<"\t";
	cout<<endl;	
	
	cout << "Enter number of elements in second array: ";
	cin >> k;
	
	for(int i=0;i<k;i++)

	{

		cout<<"Enter element "<<i+1<<":";

		cin>>ar2[i];

	}

	for(int i=0;i<n;i++)
	{		
	int j,temp;
		for(j=i+1;j<n;j++)
		{
			if(ar2[i]>ar2[j])
			{
				temp  = ar2[i];
				ar2[i] =ar2[j];
				ar2[j] =temp;
			}
		}
	}
	
	
	cout<<"Sorted elements of second array:"<<endl;
	for(int i=0;i<n;i++)
		cout<< ar2[i] <<"\t";
	cout<<endl;	
	for(int i=0; i<k ;i++)

	{

		cout<<ar3[i]<<" ";
		ar3[i] = 0;

	}

	mergeArrays(ar1, ar2 , n , k , ar3);



return 0;

}

void mergeArrays(int const arr1[], int const arr2[], int const size1, int const size2, int arr3[])
{
	int pos1=0, pos2=0;
	
	for (int i=0; i < (size1+size2); i++)
	{
		if (i == 11)
		{
			if (arr1[size1-1] > arr2[size2-1])
				arr3[i] = arr1[size1-1];
			else
				arr3[i] = arr2[size2-1];
		}
		else if (arr1[pos1] < arr2[pos2])
		{
			arr3[i] = arr1[pos1];
			pos1++;
		}
		else 
		{
			arr3[i] = arr2[pos2];
			pos2++;
		}
	}
	
	cout << "arr3 = {";
	for (int i=0; i < (size1+size2-1); i++)
		cout << arr3[i] << ", ";
	cout << arr3[size1+size2-1] << "}" ;
}

	









