#include<iostream>
using namespace std;
void printDivisor(int num)
{
   for(int i=0 ; i<=num ;i++)
   {
     if(num%i == 0)
     cout<<" "<<i;
   }
}
int main()
{
    int number;
    cout<<"Enter the number : \n";
    cin>>number;
    cout<<"All the divisors are : ";
    printDivisor(number);
}