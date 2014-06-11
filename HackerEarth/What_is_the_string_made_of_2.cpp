# include <iostream>
# include <string>
using namespace std;
int main ()
{
    int arr[10]= {6,2,5,5,4,5,6,3,7,6};
    string str;
    int  result=0;
    cin >> str;
    for (char ch : str)
    {
        string chs(1, ch); // This converts c type character to string type
        result = result + arr[stoi(chs)]; //converts chs (string) to number and accesses that position
    }
    cout<<result<<"\n";

}

