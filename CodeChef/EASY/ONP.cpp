#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    vector <char> braces;
    vector <char> operators;

    while(t--)
    {
        do
        {
            char a;
            cin >> a;
            if(a=='(') braces.push_back(a);
            else if(a==')')
            {
                braces.pop_back();
                cout << operators[operators.size()-1];
                operators.pop_back();
            }
            else if(a>96 && a<123) cout << a;
            else operators.push_back(a);
        }
        while(braces.size()!=0);
        cout << endl;
    }
}
