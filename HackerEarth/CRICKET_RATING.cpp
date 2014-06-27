# include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    int max_so_far = 0, max_ending_here = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for (int i=0; i<n; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    cout<<max_so_far<<"\n";
}
