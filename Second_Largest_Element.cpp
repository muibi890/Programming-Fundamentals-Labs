#include <iostream>
using namespace std;
int main(){
   int n, num[50], large, seclarg;
   cout<<"Enter number of elements in array: ";
   cin >> n;
   for(int i=0; i<n; i++){
      cout<< "Enter Array Element" <<(i+1) << ": ";
      cin >> num[i];
   }
   
   if(num[0]<num[1]){ 
      large = num[1];
      seclarg = num[0];
   }
   else{ 
      large = num[0];
      seclarg = num[1];
   }
   for (int i = 2; i < n ; i ++) {
     
      if (num[i] > large) {
         seclarg = large;
         large = num[i];
      }
     
      else if (num[i] > seclarg && num[i] != large) {
         seclarg = num[i];
      }
   }
   cout<< " Second largest Element in array is: " << seclarg;
   return 0;
}