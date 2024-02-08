#include <iostream>
#include <fstream>

using namespace std;

int main()
{
//Program to store frequency 


	const int s = 8;
	int n, n2;
	int a[s] = {0}; 
	int e[s] = {0}; //array for element 
	int f[s] = {0};  //array for the frequency of the file 
	int c = 0;
	int r = 0; //variable for the r
	
	
	fstream fin1; 
	
	fin1.open("file.txt" ,ios::in);   
	
	for (int i=0; i < s; i++) 
	{ 
		fin1 >> n; 
		a[i] = n;
	}
	
	fin1.close();    
	
	e[0] = a[0];
	
	f[0]++;
	
	r++;
	
	for (int i=1; i < s; i++)
	{
		for (int j=0; j < r; j++)
		{
			
			if (a[i] == e[j])
				
			{
				
				f[j]++;
				c++;
				
			}
		}
		if (c ==  0)
		{
			
			e[r] = a[i];
			f[r]++;
			r++;
		}
		
		c = 0;
	}
	
	fstream fin2;
	
	fin2.open("filetostoredata.txt" , ios::out);
	
	
	for (int i=0; i < r; i++)
	{
		n = e[i];
		
		n2 = f[i];
		
		fin2<< n << " occurs " << n2 << " times" << endl;
	}
	
	fin2.close();
	
	
	
	return 0;
}