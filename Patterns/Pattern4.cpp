#include<iostream>
// pattern4
// 1
// 22
// 333
// 4444
// 55555
using namespace std;
void pattern()
{
   for(int i=1 ;i<=5 ; i++)
   {
    for (int j=1 ; j<=i ;j++)
    {
        cout<<i;
    }
    cout<<endl;
   }
}
int main()
{
    pattern();
}
