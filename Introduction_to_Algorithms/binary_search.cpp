# include <bits/stdc++.h>
using namespace std;
int bin_search(int arr[],int first,int last,int n)
{
  if (first > last)
       return -1;
  int mid = (first+last)/2;
  if (n != arr[mid])
      return -1;
    else if (n==arr[mid])
       return mid;

  else if(n < arr[mid])
      return bin_search(arr,first,mid,n);
 else if(n > arr[mid])
       return bin_search(arr,mid,last,n);
       else
       return -1;
}
int main()
{
int arr[6] = {-9,1,3,4,66,78};
cout<<bin_search(arr,0,6,4);
}
