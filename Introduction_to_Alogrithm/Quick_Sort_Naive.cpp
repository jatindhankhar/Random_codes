# include <bits/stdc++.h>
using namespace std;
auto quicksort(vector<int> arr)
{
vector<int> smaller,pivotlist,bigger,result;
if (arr.size() < 2)
     return arr;
auto pivot = arr[arr.size()/2];
for(auto i : arr)
{
 if (i<pivot)
       smaller.push_back(i);
 else if(i>pivot)
        bigger.push_back(i);
else
   pivotlist.push_back(i);
}
smaller = quicksort(smaller);
bigger = quicksort(bigger);
copy(begin(smaller),end(smaller),back_inserter(result));
copy(begin(pivotlist),end(pivotlist),back_inserter(result));
copy(begin(bigger),end(bigger),back_inserter(result));
return result;
}


int main()
{
vector<int> arr = {19, 17, 16, 12, 9, 15, 1, 2, 11, 7, 3, 10, 14};
arr = quicksort(arr);
for(auto i : arr)
   cout<<i<<" ";
}
