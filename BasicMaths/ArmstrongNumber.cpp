#include<iostream>
#include<math.h>
// Armstrong Number
// An Amrstrong number is a number that is equal to the sum
//  of its own digits each raised to the power of the number of digits.
//  example 153 = 1^3 + 5^3 + 3^3 =153
using namespace std;
bool armstrongNumber(int num)
{
    int originalNumber = num;
    int counter=0;
    int res=0;
    while(num>0)
    {
        int temp = num%10;
        counter++;
        num = num/10;
    }
    num = originalNumber;
    while(num>0)
    {
        int temp = num%10;
        res = res + pow(temp,counter);
        num = num/10;
    }
    if(res == originalNumber)
    return true;
    return false;
}
int main()
{
    int number;
    cout<<"Enter the Number\n";
    cin>>number;
   bool res = armstrongNumber(number);
   if(res)
   cout<<"The number is Armstrong number";
   else
   cout<<"The number is not a Armstrong number";
}