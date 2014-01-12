#include<iostream>
using namespace std;
void cube_printer(int n)
{
    if(n>1)
        cube_printer(n-1);
    cout<<n*n*n<<" ";


}

int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;
    cout<<"Cubes are :"<<endl;
    cube_printer(number);
}
