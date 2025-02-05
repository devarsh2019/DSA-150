#include<iostream>
#include<math.h>
using namespace std;
void gcd(int num1 ,int num2)
{
    int gcd;
    for(int i=0 ; i<=min(num1,num2);i++)
    {
        if(num1%i == 0 && num2%i==0)
        gcd = i;
    }
   cout <<"GCD : "<<gcd;
}
int main()
{
    int number1,number2;
    cout<<"Enter the number 1 : \n";
    cin>>number1;
     cout<<"Enter the number 2 : \n";
    cin>>number2;
    gcd(number1,number2);
}