# include <bits/stdc++.h>
using namespace std;
template <typename T>
auto powr = [](T a, T b){return pow(a,b);};
auto main() -> int
{
map<const char,function<double(double,double)>> tab;
tab.insert(make_pair('+',plus<double>()));
tab.insert(make_pair('-',minus<double>()));
tab.insert(make_pair('*',multiplies<double>()));
tab.insert(make_pair('/',divides<double>()));
tab.insert(make_pair('^',powr<double>));
cout << "3.5+4.5= " << tab['+'](3.5,4.5) << endl;
cout << "3.5*4.5= " << tab['*'](3.5,4.5) << endl;
cout<< "2 raised to 3.8 is"<<tab['^'](2,3.8)<<endl;
}
