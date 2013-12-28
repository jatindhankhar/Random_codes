/*A program to implemnt Sieve of Eratosthenes
 To help you when you struck in coding classes */
# include <iostream>
using namespace std;

int main()
{ int counter=0;
  int Prime[101];
  for(int i=2;i<101;i++)
    {
      Prime[i]=1;//Assuming every element on the list to be prime
    }

 for(int i=2;i*i<=101;i++)
   {
      for(int j=2;i*j<=101;i++)
         {
            Prime[i*j]=0;//Marking multiples of a number as non-primes
         }

   }



cout<<" Prime Number upto 100 are :"<<endl;
for(int i=2;i<101;i++)
  {
     if(Prime[i])
    {
     cout<<i<<" ";//Showing Indexes as numbers
     counter++;//Counts number of primes
      }
    }
      cout<<endl<<"No of Primes are : "<<counter;

return 0;

}
