//Improved solution based on the link https://tausiq.wordpress.com/2008/12/09/uva-100-the-3n-1-problem/
# include <bits/stdc++.h>
using namespace std;
auto inline get_cycle(long long int n) -> long long int
{
    long long int c=0;
    while(true)
    {
        c++;
        if(n == 1) break;

        if(n%2 == 0) n = n >> 1; //Bitwise dividee shift
        else
            n = 3*n+1;
    }
    return c;
}
auto main() -> int
{
    ios_base::sync_with_stdio(false);
   // cin.tie(false);
    long long int a,b,orig_a,orig_b;

    while(cin>>a>>b)
    {  orig_a = a,orig_b =b;
        if(a>b) swap(a,b);
        vector<int> result;
        result.reserve(b-a+1);
        for(int i=b; i>=a; i--)
        {
            result.emplace_back(get_cycle(i));
        }
        cout<<orig_a<<" "<<orig_b<<" ";
        cout<<*max_element(begin(result),end(result))<<"\n";
    }
}
