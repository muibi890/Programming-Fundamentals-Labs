#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
 //Program to find out the mnximum number of characters occuring in a string 
char getMaxOccuringChar(char* str)
{
    int count[ASCII_SIZE] = {0};
    
    int l = strl(str);   
    for (int i=0; i < l; i++)
        count[str[i]]++;
 
    int max = -1; 
    char r;   
    for (int i = 0; i < l; i++) 
   {
        if (max < count[str[i]]) 
        {
            max = count[str[i]];
            r =  str[i];      
        }
    }
 
    return result;
}
 
int main()
{
    char str[] = "sample string"; //sample that inlcudes the repeated cstring 
    cout << "Max occurring character is " << getMaxOccuringChar(str);
}