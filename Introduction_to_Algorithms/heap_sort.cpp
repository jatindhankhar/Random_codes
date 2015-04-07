# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

void heapify(vector<int> &arr,int parent_index,int limit)
{
    while(parent_index*2+1 < limit)
    {
        auto child = parent_index*2 +1 ;
        if((child+1 < limit) and (arr[child] < arr[child+1])) child++;
        if(arr[parent_index] < arr[child])
        {
            swap(arr[parent_index],arr[child]);
            parent_index = child;
        }
        else
            return;
    }
}

void heapsort(vector<int> &arr,int limit)
{
    /* Make the heap*/
    for(int i=floor(limit/2); i >0; i--)
        heapify(arr,i,limit);
    /* Take root (maximum element) put it in the last, then build heap again
     Rinse and repeat */
    while(limit-1>0)
    {
        swap(arr[limit-1],arr[0]);
        heapify(arr,0,limit-1);
        limit--;
    }

}

int main()
{
    vector<int> arr = {19, 17, 16, 12, 9, 15, 1, 2, 11, 7, 3, 10, 14};
    cout<<"Before sorting : "<<endl;
    for(auto i : arr) cout<<i<<" ";
    heapsort(arr,arr.size());
    cout<<endl;
    cout<<"After sorting : "<<endl;
    for(auto i : arr) cout<<i<<" ";

}
