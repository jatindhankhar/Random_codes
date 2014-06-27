# include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
 register int t,a,b;
  cin>>t;
  while(t--)
  {
  int counter = 0;
  cin>>a>>b;
  vector<int> x(b-a+1);
 iota(begin(x), end(x), a);
 for( auto i : x)
    {
      string str = to_string(i);
      string reverse_str=str;
      reverse(reverse_str.begin(),reverse_str.end());
      if (str == reverse_str)
           counter++;
    }
  cout<<counter<<"\n";
  }
}
