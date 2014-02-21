/*This programs mimics a bare bone stack which supports pushing and poping and extraction of Top Most Element
 Date : 3 Feb,2014
       5:40 PM
 As I invoked system commands which are found in Linux
 So it will run on Linux and other compaitable UNIX-systems
*/
#include<iostream>
#include<cstdlib>// To call system Commands
using namespace std;

class node
{
public:
    int info;
    node *next;

    //Constrcutors
    node()
    {
        next=0;
    }

    node(int el,node *p=0)
    {
        info=el;
        next=p;
    }

};


class stack
{
private:
    node *top;

public:
    stack()
    {
        top=0;
    }

    void push(int elem)
    {
        if (top==0)
        {
            top=new node(elem);
        }

        else
        {
            node *temp=new node(elem,top);
            top=temp;
        }
    }

    void pop()
    {
        if (top==0)
        {
            cout<<"Sorry!, stack is empty";
        }
        else
        {
            node *temp=top;
            top=top->next;;
            delete temp;
        }
    }

    int topel()
    {
        if (top==0)
        {
            cout<<"Sorry!, stack is empty \n";
        }
        else
        {
            return top->info;
        }
    }

    void display()
    {    node *temp=top;
        while(temp->next!=0)
        {
            cout<<temp->info<<"--";
            temp=temp->next;
        }
        cout<<temp->info<<endl;
        cout<<"^"<<endl<<"^"<<endl<<"Top"<<endl<<endl;
    }
};
int main()
{
    stack s1;
    s1.push(98);
    s1.push(56);
    s1.push(67);
    s1.display();
    system("sleep 1.5");
    s1.pop();
<<<<<<< HEAD
=======
    system("Now Popping");
>>>>>>> 6a025436fb1aec9937f582fda5e30782f44e0590
    system("clear");
    s1.display();
    system("sleep 1.5");
    system("clear");
    cout<<"Top Most element is : "<<s1.topel()<<endl;
}
