#include <iostream> 
using namespace std; 


int oddnumber(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) { 
          
        int count = 0; 
          
        for (int j = 0; j < size; j++) 
        { 
            if (arr[i] == arr[j]) 
                count++; 
        } 
        if (count % 2 != 0) 
            return arr[i]; 
    } 
    return 0; 
} 
  

int main() 
    { 
        int arr[] = {2,3,2,3,4,4,4,5,5,6,6 }; //Array can be changed accordingly 
        int n = sizeof(arr) / sizeof(arr[0]); 
  

        cout <<"Number that occurs odd number of times is " <<oddnumber(arr, n); 
  
        return 0; 
    } 