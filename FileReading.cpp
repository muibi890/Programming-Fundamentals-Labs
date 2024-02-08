#include <iostream>


#include <fstream>

using namespace std;

int main()
{

//block of code for reading data from random file 
	const int s = 5;
	int n; 
	
	int a[s];
	
	fstream fin; 

	fin.open("firstfile" ,ios::in);   
	
	

	for (int i=0; i < s ; i++) 
	{ 
		fin >> n; 
		a[i] = n;
	}
	
	fin.close();    
	
	
	int q = 0;
	int j;
	
	//block of code for sorting the random file 
	
	for (int i = 1; i < s; i++)
	{
		r = a[i];
		
		for (j = i - 1; j >= 0 && a[j] > q ; j--)	
		
		a[j+1] = a[j];

		a[j+1] = q;
	}
		
	fstream secondfile;

	secondfile.open("sortedfirstfile.txt" ,ios::out);
	
	for (int i=0; i < s; i++)
	{

		n = a[i];

		secondfile << n << " ";
	}

	
	secondfile.close();
	
	
	
	return 0;
}