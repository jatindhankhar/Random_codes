//However code works fine it was not accepted by CodeChef :\
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
inline bool palindrome(int n)
{ int y=n;
   int rev=0;
   while(n!=0)
   {
       rev=rev*10+(n%10);
       n=n/10;
   }
   if(y==rev)
     return true;

  return false;
}
inline bool isprime(int no)
{
    for(int i=2;i<=no/2;i++)
    {
        if(no%i==0)
          return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=n; i<=MAX; i++)
    {
            if(palindrome(i)==1)
            {

                 if(isprime(i))
                {
                    cout<<i;
                break;
            }
            }
        }


}
