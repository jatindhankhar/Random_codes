/* This program add two numbers by using stacks. Instead of writing a stack, I used STL to reduce the code size
This program is not efficient but hey, it works !

TO_DO: Add a human readable DOCUMENTATION !
Author: Jatin Dhankhar
Date: 19 Feb, 2014
 Wed 5:12 PM
 */

#include<iostream>
#include<stack>// For implementing Stack
using namespace std;

void dissect(int numb,stack<int> &s,int hold=0) //This takes a number and a stack and stores the reverse of number in stack

{
    if(numb%10!=numb)
    {
        hold=numb%10;
        numb=numb/10;
        dissect(numb,s);
    }
    else
    {
        hold=numb;
    }
    s.push(hold);
}

int main()
{
    stack<int> s1,s2;
    stack<int> s3;
    int carry=0;
    int holder=0;
    int n1,n2,last;
    int size;
    bool equal;
    cout<<"Enter the two numbers so that we can add them up using stacks\n";
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    dissect(n1,s1);
    dissect(n2,s2);
    cout<<endl;
    stack<int> s1_copy(s1);
    stack<int> s2_copy(s2);

    cout<<"Stack 1 is : ";
    while(!s1_copy.empty())
    {
        cout<<s1_copy.top()<<" ";
        s1_copy.pop();
    }

    cout<<endl<<"Stack 2 is : ";
    while(!s2_copy.empty())
    {
        cout<<s2_copy.top()<<" ";
        s2_copy.pop();
    }

    if(s1.size()==s2.size())
    {
        equal=true;
    }

    for(; !s1.empty()&&!s2.empty(); s1.pop(),s2.pop())
    {
        if(equal)
        {
            carry=carry+s1.top()+s2.top();
            if(carry%10==carry)
            {
                s3.push(carry%10);
                carry=0;
            }
            else
            {
                s3.push(carry%10);
                carry=carry/10;
                last=carry;
                if(s1.size()==1)
                {
                    s3.push(last);
                }
            }

        }

        else
        {


            carry=carry+s1.top()+s2.top();
            if(carry%10==carry)
            {
                s3.push(carry%10);
                carry=0;
            }
            else
            {
                s3.push(carry%10);
                carry=carry/10;
            }
        }
    }
    while(!s1.empty())
    {
        holder=s1.top()+carry;
        if(holder%10==holder)
        {
            s3.push(s1.top()+carry);
            s1.pop();
        }
        else
        {
            s3.push(holder%10);
            s3.push(holder/10);
            s1.pop();
        }
    }

    while(!s2.empty())
    {
        holder=s2.top()+carry;
        if(holder%10==holder)
        {
            s3.push(s2.top()+carry);
            s2.pop();
        }

        else
        {
            s3.push(holder%10);
            s3.push(holder/10);
            s2.pop();
        }

    }

    cout<<endl<<"Here is the result: ";
    while(!s3.empty())
    {
        cout<<s3.top();
        s3.pop();
    }
}
