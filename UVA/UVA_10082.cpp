//UVA 10082 WERTYU
// Took the keyobard array and hit from - > http://programming-study-notes.blogspot.in/2014/02/uva-10082-wertyu.html
#include <iostream>
#include <string>
using namespace std;
int main()
{

    char keyboard[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string line;
    while(getline(cin,line))
    {
        for(auto i : line)
        {
            if(isspace(i)) cout<<" ";
            else
            {
            int j=0;
            while(i != keyboard[j+1]) j++;
            cout<<keyboard[j];
            }
        }
    cout<<endl;
    }
}

