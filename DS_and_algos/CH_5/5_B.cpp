/* Answer to Question 5-b
   This porgram prints Odd numbers starting from n till 1
   Recursively *
   Author: Jatin Dhankhar
   LICENSE: BSD
   11 Jan,2014 Sat 5:11 PM
   */
# include<iostream>
using namespace std;

void print_odd(int n )
{
   if(n>=1)
    {if(n%2!=0)
     {
         cout<<n<<" ";
         print_odd(n-2);
     }
  else
  print_odd(n-1);

}
}
int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    print_odd(number);

}
