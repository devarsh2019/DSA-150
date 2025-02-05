#include<iostream>
using namespace std;

int reverseInteger(int num)
{
    int res = 0,temp;
    while(num != 0)
    {
      int temp = num%10;
      //this is the constraint will check number don't overflow
            if ((res > INT_MAX / 10) || (res < INT_MIN/10))  
            return 0;
          res =res*10 + temp;
          num = num/10;
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