# include <iostream>
# include <bitset> //To manipulate at bit level
# include <cmath>
using namespace std;
int main()
{
 int gx,tx;
 cout<<"Enter Generator Function ";
 cin>>gx;
 cout<<"Enter Transmitter Function ";
 cin>>tx;
 bitset<16> bi_gx = gx; //Makes a 16 bit represntation of gx
 bitset<16> bi_tx = tx;
 int deg =0 ;
 for(int i=1;i<gx;i++)
   {
     if(pow(2,i) <= gx)
        deg++;
   }
cout<<"Degree is "<<deg<<"\n";
bitset<16> shifted_bi_tx = bi_tx << deg;
cout<<"Original Tx was = "<<bi_tx<<"\n";
cout<<"Shifted TX was ="<<shifted_bi_tx<<"\n";
}
