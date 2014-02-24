/* This program is based on the Martin Gardner's A Gardner's Workout
 It takes a number ,reverses it and adds it till you get back a Palindrome number !
 Eg: If 49 is passed
    49+94 = 143
    Repeats it
    143 + 341 = 484
    Now it is a palindrome ! and returns the value
Inspired by the book named below, I tried to replicate it just for fun
Based on the example given in awesome book by Rajnish Kumar named as "Short stories about Numbers"

LICESNE: GPL v3
AUTHOR: Jatin Dhankhar
23 Feb,2014
Sun 8:50 PM
*/
#include<iostream>
using namespace std;

long long int reverser(long long int n,long long int d=0,int i=1) //Reverses the number
{
    if(n%10==n)
    {
        i=i*10;
        d=d*i+(n%10);
        return d;
    }

    else
    {
        i=i*10;
        d=d*i+(n%10);
        n=n/10;
        reverser(n,d);
    }
}

long long int matched(long long int no) // Runs the program and returns when it checks a plaindrome
{
  if(no==reverser(no)) //If number is palindrome
  {
      return no; //returns the number
  }

  else
  {
      matched(no+reverser(no)); //else adds the number and it's palindrome
  }
}

int main()
{
  long long int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Result is: "<<matched(num);

}
