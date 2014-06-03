# include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
    int arr[n];
   vector<int> b;
   for(int i=2;i<=n;i++)
      arr[i] = 1;
    for(int i=2;i*i<=n;i++)
    {
      for(int j=2; i*j<=n;i++)
        arr[i*j]=0;
    }
   for(int i=2; i<=n;i++)
       {
        if(arr[i])
         {b.push_back(i);
       }
 }
 bool flag=false;
 for(int i : b)
 {
   if(find(b.begin(), b.end(), n-i)!=b.end())
   {
    cout<<"Deepa\n";
    flag=true;
    break;
   }
 }
 if(!flag)
 cout<<"Arjit\n";
}
}
