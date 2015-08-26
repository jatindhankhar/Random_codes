# include <bits/stdc++.h>
using namespace std;
int main()
{
    string line,word;
    while(getline(cin,line))
    {
        istringstream istr(line);
        auto spaces = count_if(begin(line),end(line),[](unsigned char c){return isspace(c);});
        while(istr >> word)
        {
            reverse_copy(begin(word),end(word),ostream_iterator<char>(cout));
            if(not line.empty() and spaces > 0 )
            {
                cout<<" ";
                spaces--;
            }

        }
cout<<"\n";
    }

}
