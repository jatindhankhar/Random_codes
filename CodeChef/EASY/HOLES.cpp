#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    char str[101];
    cin>>t;
    while(t!=0)
    {
        int counter=0;
        cin>>str;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='R'||str[i]=='Q')
             counter++;

            else if (str[i]=='B')
             counter=counter+2;
        }
     t--;
     cout<<counter<<endl;
    }


}
