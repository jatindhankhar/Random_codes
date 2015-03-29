# include <algorithm>
# include <iostream>
# include <vector>
using namespace std;
int main()
{
	vector<int> arr = {19, 17, 16, 12, 9, 15, 1, 2, 11, 7, 3, 10, 14};
	cout<<"Before sorting : ";
	for(auto i : arr) cout<<i<<" ";
	cout<<endl;
	make_heap(begin(arr),end(arr));
	sort_heap(begin(arr),end(arr));
	cout<<"After sorting : ";
	for(auto i : arr) cout<<i<<" ";
}

