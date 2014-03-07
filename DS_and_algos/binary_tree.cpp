//Source code inspired from different sources,from where I learned different parts of the it,but few changes implemented by me ;)
#include<iostream>
#include<queue>
using namespace std;
class tree_node
{
public:
    int data;
    tree_node *left;
    tree_node *right;

//Constrcutors
    tree_node()
    {
        left=right=0;
    }

    tree_node(int el,tree_node *l=0,tree_node *r=0)
    {
        data=el;
        left=l;
        right=r;
    }

};


class BS_tree
{
private:
    static tree_node *root;

public:


    //Class Functions
    bool isempty()
    {
        return(root==0); //Returns true if ROOT==NULL(0)
    }

    void insert_el(int info)
    {
        tree_node *holder=new tree_node(info);

        if(isempty())
        {
            root=holder;
        }

        else
        {
            tree_node *tmp;
            tree_node *parent;
            tmp=root;
            while(tmp!=0)
            {
                parent=tmp;
                if(info>tmp->data)
                {
                    tmp=tmp->right;
                }

                else
                    tmp=tmp->left;
            }
            if(info<parent->data)
            {
                parent->left=holder;
            }
            else
                parent->right=holder;
        }
    }

    tree_node * searcher(int info,int i=0)
    {
        tree_node *tmp;
        tree_node *ps;
        tmp=root;
        while(tmp!=0)
        {
            if(info==tmp->data)
            {
                if(i!=0)
                    return tmp;
                else
                    return tmp;
            }

            else if(info<tmp->data)
            {
                tmp=tmp->left;
                //flag=true;
                if(i!=0)
                    return tmp;
                else
                    return ps=tmp->left;
            }

            else
            {
                tmp=tmp->right;
                //flag=true;
                if(i!=0)
                    return tmp;

                else
                    return ps=tmp->right;
            }

        }



    }

    void preorder_travers(tree_node *p=root)
    {
        if(p!=0)
        {
            cout<<p->data<<" ";
            preorder_travers(p->left);
            preorder_travers(p->right);
        }
    }

    void inorder_travers(tree_node *p=root)
    {

        if(p!=0)
        {
            inorder_travers(p->left);
            cout<<p->data<<" ";
            inorder_travers(p->right);

        }
    }

    void postorder_travers(tree_node *p=root)
    {

        if(p!=0)
        {
            postorder_travers(p->left);
            postorder_travers(p->right);
            cout<<p->data<<" ";
        }
    }


    void BFS(tree_node *p=root)
    {
        queue<tree_node *> q1;

        if(p!=0)
        {
            q1.push(p);
            while(!q1.empty())
            {
                p=q1.front();
                q1.pop();
                cout<<p->data<<" ";
                if(p->left!=0)
                {
                    q1.push(p->left);
                }

                if(p->right!=0)
                {
                    q1.push(p->right);
                }
            }
        }
    }

    void deletenode(int val)
    {
        tree_node *parent=searcher(val,1);
        cout<<parent->data<<"\n";
        tree_node *target=searcher(val);
        cout<<target->data<<"\n";

// If the target node is at the Leaf Position

       if(target==parent)
       {

            tree_node *few=target->left;
            while(few!=0)
            {
                few=few->right;
            }
            target->data=few->data;
            delete few;
       }



        if(target->left==0 && target->right ==0)
        {
            if(parent->left==target)
            {
                parent->left=0;
                delete target;
            }

            else if (parent->right==target)
            {
                parent->right=0;
                delete target;
            }
        }

        else if(target->left==0 && target->right !=0)
        {
            if(parent->left==target)
            {
                parent->left=target->right;
                delete target;
            }

            else if(parent->right==target)
            {
                parent->right=target->right;
            }
        }

        else if(target->left!=0 && target->right ==0 )
        {
            if(parent->left=target)
            {
                parent->left=target->left;
                delete target;
            }

            else if(parent->right==target)
            {
                parent->right=target->left;
                delete target;
            }
        }

        else if(target->left!=0 && target->right!=0)
        {
            tree_node *few=target->left;
            while(few!=0)
            {
                few=few->right;
            }
            target->data=few->data;
            delete few;
        }






    }

};
tree_node* BS_tree::root=0;
int main()
{
    BS_tree b1;
    int no;
    int holder;
    cout<<"How many elements you want to insert\n";
    cin>>no;
    for(int i=0,holder; i<no; i++)
    {
        cout<<"Enter the element: ";
        cin>>holder;
        b1.insert_el(holder);
    }


    cout<<"Preorder traversal \n";
    b1.preorder_travers();
    cout<<"\nInorder traversal \n";
    b1.inorder_travers();
    cout<<"\nPostorder traversal \n";
    b1.postorder_travers();
    cout<<"\nBFS implementaion \n";
    b1.BFS();
    tree_node *po=b1.searcher(45,1);
    cout<<"\nBFS implementation\n";
    b1.BFS();
    int el;
    cout<<"\n Enter element to search for: ";
    /*cout<<"\n Enter the element to delete \n";
    cin>>el;
    b1.deletenode(el);
    cout<<"\n After deletion \n";
    b1.BFS();*/
    cin>>el;
    tree_node *p=b1.searcher(el);
    cout<<"Target node is ";
    cout<<p->data<<"\n";
    delete p;
    tree_node *ps=b1.searcher(el,1);
    cout<<"Parent node is  ";
    cout<<p->data<<"\n";
    delete ps;
}
