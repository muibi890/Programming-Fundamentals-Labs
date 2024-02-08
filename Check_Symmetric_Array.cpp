#include <iostream> 
using namespace std; 
  
void same(int arr[], int n) //Function to find out whether if array is same or not 
{ 
   
    int flag = 0; 
  
   
    for (int i = 0; i <= n / 2 && n != 0; i++) { 
  
       
        if (arr[i] != arr[n - i - 1]) { 
            flag = 1; 
            break; 
        } 
    } 
  
   
    if (flag == 1) 
        cout << "The array is not same"; 
    else
        cout << "The array is same"; 
} 
  

int main() 
{ 

	int arr[] = { 2, 3, 15,15,3,2 };    //the array can be changed
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    same(arr, n); 
    return 0; 
} 