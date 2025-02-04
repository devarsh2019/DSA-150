#include<iostream>
// pattern5
// *****
// ****
// ***
// **
// *
using namespace std;
void pattern()
{
   for (int i=0 ; i<5;i++)
   {
    for (int j=5 ; j>i ; j--)
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