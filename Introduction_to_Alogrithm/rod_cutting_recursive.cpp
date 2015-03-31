# include <iostream>
# include <vector>
# incldue <algorithm>
using namespace std;
auto max_price(vector<int> &price,int len)
{
 if(len == 0)
   return 0;
 auto max_val = INT_MIN;
 for(int i=0;i<len;i++)
   max_val = max(max_val,price[i]+max_price(price,len-1-i));
return max_val;
}
int main()
{
vector<int> price_table = {1,5,8,9,10,17,17,20};
cout<<max_price(price_table,4);
}
