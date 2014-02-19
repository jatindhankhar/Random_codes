/* This program put commas in an integer at certain positions as per the International Standards
 It takes a number changes it into string by using stringstream found in <sstream> header file, 
 then recursivley adds commas
  For example 12345 will be 12,345
 Author: Jatin Dhankhar
 Date: 19 Feb, 2014
   Wed 6:50 PM
 */

#include<iostream>
#include<sstream> //To convert string streams
using namespace std;

void recurse(string &str, int len)
 { //cout<<"Entered the loop";
   if(len<=3)
   { // cout<<"I'm in the If condition";

       //return ;
   }

   else
   {
       // cout<<"in the else condition";
       len=len-3;
       //char ch=',';
       str.insert(len,",");
      // cout<<"String is now: "<<str;
    recurse(str,len);
   }
 }

int main()
{
 stringstream ss;
 int num;
 cout<<"Enter the number ";
 cin>>num;
 ss << num;
 string s1 = ss.str();

 int lw=s1.length();
 cout<<"Here is the string: "<<s1<<endl;
 cout<<"Here is the length: "<<lw<<endl;
 recurse(s1,lw);
 cout<<"Result : "<<s1;
 //cout<<"Here is the string";
 //cout<<es;
}
