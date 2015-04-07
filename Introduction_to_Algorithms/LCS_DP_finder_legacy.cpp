# include <bits/stdc++.h>
using namespace std;
auto stringify = [](int a,int b)
{
    return to_string(a)+to_string(b);
};
auto lcs(string a,string b,int la,int lb)
{
    int hold[la+1][lb+1];
    for(int i=0;i<=la;i++)
    {
      for(int j=0;j<=lb;j++)
          {
           if(i == 0 or j== 0)
               hold[i][j] = 0;
            else if (a[i-1] == b[i-j])
               hold[i][j] = hold[i-1][j-1] + 1;
               else
               hold[i][j] = max(hold[i-1][j],hold[i][j-1]);
          }

    }
string result;
int i=la,j=lb;
while(i > 0 and j>0)
{
 if(a[i-1] == b[j-1])
 {
  result = result + a[i-1];
  i--;j--;
 }
else if(hold[i-1][j] > hold[i][j-1])
   i--;
   else //Climb up the ladder
   j--;
}
reverse(begin(result),end(result));
return result;
}
int main()
{
    string a = "human";
    string b = "chimpanzee";
    cout<<lcs(a,b,a.length(),b.length());


}
