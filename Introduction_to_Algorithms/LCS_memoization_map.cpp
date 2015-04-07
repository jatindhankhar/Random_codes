# include <bits/stdc++.h>
using namespace std;
auto stringify = [](int a,int b)
{
    return to_string(a)+to_string(b);
};
auto lcs(string a,string b,int la,int lb)
{
    static map<string,int> memo;
    if(la == 0 or lb == 0)
        return 0;
    auto key = stringify(la,lb);
    if(memo.find(key) != memo.end())
        return memo[key];
    if(a[la-1] == b[lb-1])
        memo[key] = lcs(a,b,la-1,lb-1) + 1;
    else
        memo[key] = max(lcs(a,b,la,lb-1),lcs(a,b,la-1,lb));
   return memo[key];
}
int main()
{
    string a = "AGGTAB";
    string b = "GXTXAYB";
    cout<<lcs(a,b,a.length(),b.length());


}
