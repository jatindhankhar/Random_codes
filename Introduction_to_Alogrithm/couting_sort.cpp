# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> input_array = {INT_MIN,6,0,2,0,1,3,4,6,1,3,2};
    vector<int> sorted_array(input_array.size());
    vector<int> temp_array(*max_element(begin(input_array),end(input_array))+1);
    for(auto val : input_array)
    {
        if(val == INT_MIN)
            continue;
        temp_array[val] += 1;
    }

    for(int i=1; i<temp_array.size(); i++)
    {
        temp_array[i] += temp_array[i-1];
    }

    for(auto it = end(input_array); it != begin(input_array); it--)
    {
        if(*it == INT_MIN) break;
        sorted_array[temp_array[*it]] = *it;
        temp_array[*it] -= 1;
    }
    sorted_array.erase(begin(sorted_array));
    cout<<"Sorted array is ";
    for(auto i : sorted_array)
    {
        cout<<i<<" ";
    }
    cout<<endl;
input_array.erase(begin(input_array));
stable_sort(begin(input_array),end(input_array));
cout<<"Answer should be ";
for(auto i : input_array) cout<<i<<" ";
}
