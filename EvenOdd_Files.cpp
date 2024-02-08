include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int s=6;
	int a[s];
	int n;
	
	
	fstream fin1; 
	fin1.open("file.txt" ,ios::in);   
	

	for (int i=0; i < s ; i++) 
	{ 
		fin1 >> n; 
		a[i] = n;
	}
	
	fin1.close()
//storing even numbers in file 	
	fstream fin2;
	//file with even
	
	fin2.open("filewitheven.txt", ios::out)
	
for(int i = 0; i < s ; i++)
{
	if (a[i] % 2 == 0)
	{
		n = a[i];
		fin2 << n << " ";
	
	}
}
//storing odd numbers in file 
fstream fin3;
	fin3.open("filewithodd.txt" ,ios::out);
	for (int i=0; i < s; i++)
	{
		if (array[i] % 2 != 0)
		{
			n = a[i];
			fin3  << n << " ";
		}
	}
	file3.close();
	
	return 0;
}