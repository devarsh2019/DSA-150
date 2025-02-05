#include<iostream>
using namespace std;

int reverseInteger(int num)
{
    int res = 0,temp;
    while(num>0)
    {
      temp= num%10;
      res = res*10 + temp;
      num /= 10;
    }
  return res;
}
int main()
{
    int number;
    cout<<"Enter the number\n";
    cin>>number;
    int res = reverseInteger(number);
    cout<<"Reverve Number is : "<<res;
}