#include<cstdio>
using namespace std;
int main()
{
    int n,k,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int hold;
    while(n!=0)
    {
        scanf("%d",&hold);
        if(hold%k==0)
         c++;
        n--;
    }
  printf("%d",c);
}
