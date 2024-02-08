

#include <iostream>
#include <fstream>
using namespace std;
//Program to remove whitespaces
int main()
{
    char character;
    int q;
    ifstream fin;   //used to read from the file 
    ofstream fout;   //used to create and write on the file 
    fin.open("random.txt");
    
    fout.open("transferred.txt");
    while (fin)
    {
        character = fin.get();
            while (character == ' ')
            {
                if (q == 0)
                    fout << character;
                    character = fin.get();
                    q++;

            }
        fout << character;
        q = 0;

    }
    fin.close();
    fout.close();
    return 0;

}

