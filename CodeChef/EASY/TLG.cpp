#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    int p1,p2;
    register int temp_p1=0,temp_p2=0;
    int lead[t];
    int win[t];
    for(int foo=0; foo<t; foo++)
    {
        cin>>p1>>p2;
        temp_p1=temp_p1+p1;
        temp_p2=temp_p2+p2;
        if(temp_p1>temp_p2)
        {

            lead[foo]=temp_p1-temp_p2;

            win[foo]=1;


        }

        else
        {
            lead[foo]=temp_p2-temp_p1;
            win[foo]=2;
        }

    }

    int winner,max=1;
    for(int i=0; i<t; i++)
    {
        if(max<lead[i])
        {
            max=lead[i];
            winner=win[i];
        }

    }

    cout<<winner<<" "<<max;

}

