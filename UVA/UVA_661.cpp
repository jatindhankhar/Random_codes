//UVA 661 Blowing Fuses
# include <bits/stdc++.h>
using namespace std;
const auto toggle = [&](bool st) -> bool { return !(st); };
int main()
{
    //freopen("in.txt","r",stdin);
    int n,m,c,st,sum=0,seq=1,max_val=0;
    while(cin>>n>>m>>c)
    {
        if(n == 0 and m == 0 and c == 0) break;
        cout<<"Sequence "<<seq<<endl;
        vector<int> devices(n);
        vector<unsigned char> state(n);
        for(auto &i : state) i = false;
        for(auto &i : devices) cin>>i;
        // for(auto &i : ops) cin>>i;
        max_val=0;
        while(m--)
        {

            cin>>st;
            state[st-1] = toggle(state[st-1]);
            sum = 0;
            for(int i=0; i<state.size(); i++)
            {

                if(state[i])
                {

                    sum+=devices[i];
                }
            }
            if(max_val<sum) max_val=sum;
        }

        seq++;
        sum=0;
        for(int i=0; i<state.size(); i++)
        {
            //sum = 0;
            if(state[i])
            {
                //cout<<"Following fuse is toggled "<<devices[i]<<endl;
                sum+=devices[i];
            }
        }
        if(sum>c)
            cout<<"Fuse was blown.\n";
        else
        {
            cout<<"Fuse was not blown.\n";
            cout<<"Maximal power consumption was "<<max_val<<" amperes.\n";
        }
        cout<<endl;
    }
}
