#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int s1 = 7;
	const int s2 = 7;
		int a1[s1];
    int a2[s2];
	int a3[s1 + s2];
	
//reading data values	
	fstream fin1; 
	fin1.open("firstsortedfile.txt" , ios::in);   
	
	int n; 

	for (int i=s1-1; i >= 0 ; i--) 
	{ 
		fin1 >> n; 

		a1[i] = n;
	}
	
	fin1.close();
//reading second set of values 
	fstream fin2; 

	fin2.open("secondsortedfile.txt" ,ios::in);

	for (int i = s2 - 1 ; i >= 0 ; i--) 

	{ 

		fin2 >> n; 

		a2[i] = n;

	}

	fin2.close();
//merging data 
	int c1 = 0;
	int c2 = 0;
	
	for (int i=0; i < s1+s2; i++)
	{
		if (i == s1+s2-1)
		{
			if (a1[s1-1] > a2[s2-1])
			{
				a3[i] = a1[s1-1];
			}	
	else
	{
				a3[i] = a2[s2-1];
	}
	}
		else if (a1[c1] < a2[c2])
		{
			a3[i] = a1[c1];
			c1++;
		}
		else
		{
			a3[i] = a2[c2];
			c2++;
		}
	}
	
	fstream fin3;
	fin3.open("mergedfile.txt" ,ios::out);
	
	for (int i=0; i < s1+s2; i++)
	{
		n = a3[i];
		fin3 << n << " ";
	}
	
	fin3.close();
	
	return 0;
}
