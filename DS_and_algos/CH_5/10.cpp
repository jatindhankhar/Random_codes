# include<iostream>
using namespace std;
double store=0;
double series_adder(int number)
{
    if(number>1)
    {
        if(number%2==0)
        {

            store+=(1.0/number);
            cout<<"Number is "<<number<<endl;
            cout<<"Store is :"<<store<<endl;
        }

        else
        {
            store-=1.0/number;

            cout<<"Number is "<<number<<endl;
            cout<<"Store is :"<<store<<endl;
        }
        series_adder(--number);
    }

    else
    {
        store+=1;
        return store;

    }

}

int main()
{
    int n;
    cout<<"Enter the number upto which you want to sum th series";
    cin>>n;
    cout<<"Sum of the series is :"<<series_adder(n);
    cout<<"\n"<<store;
    return 0;
}
