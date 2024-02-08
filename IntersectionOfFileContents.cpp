#include <iostream>


#include <fstream>

using namespace std;
//Program to find out the intersection between two sets 
//Data set number 1
//2 5 9 11 15 55 3 4 1

//Data set number 2
//42 4 7 5 13 55 1

//intersection of both sets 
//4 55 1 

int main()
{
	int n; 
	const int a1 = 9;
	const int a2 = 8;
	
	int farray[a1], sarray[a2];
	
	fstream fin1; 
	
	fin1.open("firstf.txt" , ios::in);   
	

	
	for (int i=0; i < a1; i++) 
	{ 
		fin1 >> n; 
		farray[i] = n;
	}
	
	fin1.close();

	fstream fin2; 
	
	fin2.open("secondf.txt" ,ios::in);

	for (int i=0; i < a2 ; i++) 
	{ 
		fin2 >> n; 
		
		sarray[i] = n;
	}
	
	fin2.close();

	fstream f;
	//saving intersection 
	
	f.open("intersectionofsets.txt" ,ios::out);
	
	for (int i=0; i < a1; i++)
	{
		
		for (int j=0; j < a2; j++)
		{
			
			if (farray[i] == sarray[j])
			
			{
				f<< farray[i] << " ";
			}

		}

	}
	
	
	f.close();
	
	
	
	return 0;
}