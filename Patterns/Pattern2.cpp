#include<iostream>

// pattern 2
// *
// **
// ***
// ****
// *****
using namespace std;

void pattern()
{
   for(int i =0 ; i <5 ; i++)
   {
       for (int j=0 ; j<=i ; j++)
       {
        cout<<"*";
       }
       cout<<endl;
   }
}
int main()
{
    pattern();
}