#include <ctime>
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
vector<string> days = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
auto get_date(int day,int month,int year) -> int
{
   tm time_in = {0,0,0,day,month-1,year-1900};
   auto time_temp = mktime(&time_in);
   auto *time_out = localtime(&time_temp);
   return time_out->tm_wday;

}
int main(){
int day,month,year;
cin>>day>>month>>year;
cout<<days[get_date(day,month,year)];

}
