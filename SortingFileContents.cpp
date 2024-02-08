#include <iostream>

#include <fstream>

using namespace std;

int main()
{
	const int s = 7;

	int a[s];
	int c;
	
	fstream fin1; 

	fin1.open("unsortedfile.txt" ,ios::in);   
	
	int n; 

	for (int i=0; i < s ; i++) 

	{ 
		fin1 >> n; 

		a[i] = n;
	}
	
	fin1.close();    
	

	do
	{
		c = 0;
		for (int i=0; i < s-1; i=i+2)
		{
			if(a[i] > a[i+1])
			{
				a[i] = a[i] + a[i+1];

				a[i+1] = a[i] - a[i+1];



				a[i] = a[i] - a[i+1];

				c++;

			}

		}
		
		for (int k=1; k < s; k=k+2)
		{
			if(a[k] > a[k+1])
			{
				a[k] = a[k] + a[k+1];

				a[k+1] = a[k] - a[k+1];

				a[k] = a[k] - a[k+1];

				c++;
			}
		}
	}
	while (c != 0);
		//writing sorted text into another file 
	fstream fin2;

	fin2.open("processedsortedfile.txt" ,ios::out);
	
	for (int i=0; i < s; i++)

	{
		n = a[i];

		fin2 << n << " ";

	}
	
	fin2.close();
	
	
	
	return 0;
}