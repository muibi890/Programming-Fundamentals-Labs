#include <iostream>

#include <string>

#include <fstream>


using namespace std;


//Program to count the number of w in the file 
int main()


{
	string q;
	
	int w = 0;
	
	char ch[50];
	
	fstream fin("filecontainingwords.txt");
	while (fin >> q)
	{
	
		w++;
	}
	cout << "The number of words in the file are:  " << w << endl;
	
	return 0;
}