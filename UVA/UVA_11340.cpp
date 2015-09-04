// UVA 11340 - Newspaper
# include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t,times,val;
    char ch;
    double pay=0;
    map<char,int> table;
    string line;
    cin>>t;
    while(t--)
    {
        pay=0;
        table.clear();
        cin>>times;
        while(times--)
        {
            cin>>ch>>val;
            table[ch]=val;
        }
        cin>>times;
        cin.ignore(); // A trailing char was causing the value to change
        while(times--)
        {
            getline(cin,line);
            for(auto i : line)
            {
                if(not (table.find(i) == table.end())) pay = pay + table[i];
            }
        }
        cout<<fixed<<setprecision(2)<<pay/100.0<<"$"<<endl;
    }
}
