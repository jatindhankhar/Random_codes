# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main()
{
    vector<int> arr = {56,78,57,0,98,6};
    for(int i=1;i<arr.size();i++)
    {
      int j=i;
      while(j>0 and arr[j-1]>arr[j])
         {swap(arr[j-1],arr[j]);j--;}
    }
for(auto i : arr) cout<<i<<endl;
}
