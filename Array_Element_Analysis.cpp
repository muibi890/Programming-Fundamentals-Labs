#include<iostream>
using namespace std;
int main()
{
  int a[100],i,n,zero=0,positive=0,negative=0, even= 0, odd = 0;
  
 cout<<"Enter The Size of An Array : "<< endl;
  cin>>n;

  cout<<"Enter The Element :\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }


  for(i=0;i<n;i++)
  {
   if(a[i]>0)
   positive++;
   else if(a[i]<0)
   negative++;
   else
   zero++;
  }
  for(i = 0; i < n; i++)
  {
  if((a[i] % 2) == 0)
  even++;
  else
  odd++;
  }
  
  
  
  
  cout<<"Number of positive integers = "<<positive<< endl;
  cout<<"Number of negative integers = "<<negative<< endl;
  cout<<"Number of zeros = "<<zero << endl;
  cout << "Number of even integers = " << even << endl;
  cout << "Number of odd integers = " << odd << endl;
  
 return 0;

}