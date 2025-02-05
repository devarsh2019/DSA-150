#include<iostream>
using namespace std;

bool chkPrime(int num)
{
    int counter =0;
    for (int i=0 ;i<=num;i++)
    {
        if(num%i == 0)
        counter++;
    }
    if(counter == 2)
    return true;
    return false;
}
int main()
{
    int number;
    cout<<"Enter the number : \n";
    cin>>number;
    bool res = chkPrime(number);
    if(res)
    cout<<"The number is Prime : ";
    else
    cout<<"The number is not Prime";
}