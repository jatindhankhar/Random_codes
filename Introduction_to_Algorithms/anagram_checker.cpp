# include <bits/stdc++.h>
using namespace std;
typedef map<char,int> dictionary;

auto is_anagram(string a,string b)
{
 if(a.length() != b.length())
 {
  return false;
 }
 dictionary freq_a;
 for(auto i : a)
     freq_a[i]++;
dictionary freq_b;
  for(auto i : b)
     freq_b[i]++;
if(equal(begin(freq_a),end(freq_a),begin(freq_b)))
   return true;
return false;
}
int main()
{
cout<<(is_anagram("eat","toa")? "Yes":"No");
}
