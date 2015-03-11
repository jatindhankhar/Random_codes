// C++11 version
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct item_type
{
    double  weight, value;
};

vector< item_type > items =
{
    {12,4},
    {1,2},
    {2,2},
    {1,1},
    {4,10}
};

int main()
{
    sort
    (
        begin( items ), end( items ),
        [] (const item_type& a, const item_type& b)
    {
        return a.value / a.weight > b.value / b.weight;
    }
    );

    double space = 15;
    double worth = 0;

    for ( auto item : items )
    {
        if ( space >= item.weight )
        {
            space -= item.weight;
            worth += item.value;
        }
        else
        {
            break;
        }


    }
    cout<<space<<" "<<worth<<endl;
}
