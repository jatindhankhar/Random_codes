# include <bits/stdc++.h>
using namespace std;
auto lcs(string a,string b,int la,int lb)
{
 int memo[la+1][lb+1];
 for(auto &up : memo)
 {
   for(auto &deep : up)
      deep = -1;
 }
 if(la == 0 or lb == 0)
   return 0;

   if(memo[la][lb] != -1)
    return memo[la][lb];
   if(a[la-1] == b[lb-1])
      memo[la][lb] = lcs(a,b,la-1,lb-1) + 1;
    else
    memo[la][lb] = max(lcs(a,b,la,lb-1),lcs(a,b,la-1,lb));
 return memo[la][lb];
}
int main()
{
string a = "AGGTAB";
string b = "GXTXAYB";
cout<<lcs(a,b,a.length(),b.length());
}
