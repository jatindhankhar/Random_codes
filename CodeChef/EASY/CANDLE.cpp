
// This solution helped me understand the problem. Look at the code, it's so much elegant in what it does
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
	int t,arr[10];
	cin>>t;
	while(t--)
	{
		int p,min=9;
		for(int i=0;i<10;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<10;i++)
		{
			if(min>arr[i])
			{
				p=i;
				min=arr[i];
			}
			else if(min==arr[i]&&p==0)
			{
				min=arr[i];
				p=i;
			}
		}
		if(p==0)
		cout<<"1";
		for(int i=0;i<=min;i++)
		cout<<p;
		cout<<"\n";
	}
	return 0;
}
