#include <iostream>
#include <fstream>

using namespace std;
//Program that removes duplicates 
int main()
{
	int s=15;
	int a[s];
	int n; 
	int temp=0;
	int c = 1;
	int k;
	
	fstream fin1; 
	
	fin1.open("filewithduplicate.txt" ,ios::in);   
	

	
	for (int i=0; i < s ; i++) 
	{ 
		fin1 >> n; 
		
		a[i] = n;
	}
	
	fin1.close();    
	
	
	for (int i=1; i < s; i++)
	{
		temp = a[i];
		
		for (k = i-1; k>=0 && a[k] > temp; k--)	
			
		{
			a[k+1] = a[k];
		}
		
		a[k+1] = temp;
	}
	

	
	while(c != 0)
	{
		c = 0;
		for (int i=0; i < s-1; i++)
		{
			if (a[i] == a[i+1])
				
			{
				for (int k=i+1; k < s; k++)
					
					a[k] = a[k+1];
				
				s--;
				
				c++;
			}
		}
	}
	
	
	//Storing data in file without the duplicates 
	fstream fin2;
	
	fin2.open("filewithoutduplicate.txt" ,ios::out);
	
	for (int i=0; i < s; i++)
	{
		n = a[i];
		
		fin2 << n << " ";
	}
	
	fin2.close();
	
	return 0;
}