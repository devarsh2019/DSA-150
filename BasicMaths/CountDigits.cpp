#include<iostream>
using namespace std;

int countDigit(int& num)
{
    int counter=0;
    while(num > 0)
{
   num = num/10;
   counter++    ;
}
return counter;
}
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    int res = countDigit(num);
    cout<<"Number of digits is : "<<res;
}
