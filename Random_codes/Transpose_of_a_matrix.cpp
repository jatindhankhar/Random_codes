/* This programs prompts user to enter elements for a 3x3 matrix then claculates it's transpose
Author: Jatin Dhankhar
License: BSD License
20 Jan,2013 9:23 PM
*/
#include<iostream>
using namespace std;\
int main()
{
    int arr[3][3];
    int arr1[3][3];
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
          {
              cin>>arr[i][j];
              arr1[j][i]=arr[i][j];
          }
     }
  cout<<"Your array orginially was : \n";
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
  }

 cout<<"It's transpose is : \n";
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         cout<<arr1[i][j]<<" ";
     }
 cout<<endl;
 }
}
