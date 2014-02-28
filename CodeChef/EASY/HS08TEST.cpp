#include<iostream>
using namespace std;
int main()
{
    int withdraw;
    float balance;
    cin>>withdraw;
    cin>>balance;
    if(withdraw<=2000||withdraw>0&&balance<=2000&&balance>0)
    {
        if(withdraw%5==0)
        {
            if(balance>withdraw+0.50)
            {
                balance=balance-withdraw-0.50;
                cout<<balance+0.00<<endl;
            }

            else
            cout<<balance+0.00<<endl;
        }

        else
        cout<<balance<<endl;

    }
}
