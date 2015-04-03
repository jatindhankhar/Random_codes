# include <iostream>
# include <algorithm>

using namespace std;

auto lcs(string x,string y,int x_len,int y_len)
{
    if(x_len == 0 or y_len == 0 )
        return 0;
    if(x[x_len-1] == y[y_len-1])
        return lcs(x,y,x_len-1,y_len-1) + 1;
    else
        return max(lcs(x,y,x_len,y_len-1),lcs(x,y,x_len-1,y_len));
}
int main()
{
string  x = "AGGTAB";
string  y = "GXTXAYB";
cout<<"LCS length is "<<lcs(x,y,x.length(),y.length());
}
