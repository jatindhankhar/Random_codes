/* This program mimics a singly linked list with bare bones fucntions that manipulates it
Author: Jatin Dhankhar
1 Feb,2014 8:44 PM

Thanks to Yogesh Drall for modifying Delete and some other functions of the class linked_list
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class node
{
public:
    int info;
    node *next;

    //Constructors
    node()
    {
        next=0;
    }

    node(int info_value,node *n=0)
    {
        info=info_value;
        next=n;
    }
};

class linked_list
{
private:
    node *head,*tail;

public:
    //Constrcutors
    linked_list()
    {
        head=tail=0;

    }

    void addtohead(int el)
    {
        head=new node(el,head);
        if(tail==0)
        {
            tail=head;
        }
    }

    void addtotail(int el)
    {
        if(tail!=0)
        {
            tail->next=new node(el);
            tail=tail->next;

        }
        else
            head=tail=new node(el);

    }

    void deletefromhead(int el)
    {
        node *tmp=head;
        if(head==tail)
        {
            cout<<" "<<head->info<<" will be deleted \n";
            delete tmp;
            head=tail=0;
        }
        else
            head=head->next;
        cout<<" "<<head->info<<" will be deleted \n";
        delete tmp;
    }

    void deletefromtail()
    {
        if(head==tail)
        {
            cout<<" "<<tail->next<<" will be deleted \n";
            delete head;
            head=tail=0;
        }
        else
        {
            node *temp=head;
            while (temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=0;
            cout<<tail->info<<" will be deleted \n";
            tail=temp;
        }
    }


    void deletenode(int el)
    {
        if(head==0)
        {
            cout<<"ERROR 500!,resource unavilable \n";
        }

        else
        {
            node *temp=head;
            node *prev;
            while(temp->next!=0)
            {
                if (head->info==el)
                {
                    head=head->next;
                    delete temp;
                    return;
                }

                else if(temp->info==el)
                {
                    prev->next=temp->next;
                    cout<<" "<<temp->info<<" will be deleted \n";
                    system("sleep 1.5");
                    delete temp;
                    return ;
                }
                else if (temp->next==tail&&tail->info==el)
                {
                    deletefromtail();
                    return;
                }
                prev=temp;
                temp=temp->next;
            }
        }
    }



    void insertnode(int el)
    {
        int flag=0;
        int pos;
        cout<<"\n Where do you want to insert the element ?\n";
        cout<<"To insert at Head press 0\n";
        cout<<"To insert at any other positions-Specify the position\n";
        cin>>pos;
        if(pos==0)
            addtohead(el);
        else if(pos!=0)
        {
            node *temps=head;

            for(int i=1; temps->next!=0; temps=temps->next,i++)
            {

                if(i==pos)
                {
                    node *tempd=new node(el,temps->next);
                    temps->next=tempd;
                    flag=1;
                }
            }

            if(!flag)
            cout<<"Sorry! No such position exists :( \n";
        }



    }
    void display()
    {
        node *temp;
        temp=head;
        cout<<"Your list looks like this : ";

        while (temp->next!=0)
        {
            if (temp==0)
            {
                break;
            }
            cout<<temp->info<<"--";
            temp=temp->next;
        }
        cout<<temp->info;
        cout<<endl;

    }


};

int main()
{
    int numb,hold;
    linked_list l1;
    cout<<"How many numbers you want to insert \n";
    cin>>numb;
    if(numb!=0)
    {


        for(int i=0; i<numb; i++)
        {
            cout<<"Enter the number ";
            cin>>hold;
            l1.addtohead(hold);
        }

        cout<<"End of loop \n";
        l1.display();
    }
    int delnum;
    cout<<"Enter the number you want to delete: ";
    cin>>delnum;
    l1.deletenode(delnum);
    l1.display();
    l1.insertnode(89);
    l1.display();
    return 0;
}
