#include<iostream>
using namespace std;

// Palindrome number
// 121 reverse 121 both way its same so its a palindrome number

bool palindrome(int num)
{
    int originalNumber =num;
    int res =0;
   // bool chkPalindrome = false;
    while( num > 0)
    {
        int temp = num%10;
        res = res*10 + temp;
        num = num/10;
    }
    if(res == originalNumber)
    return true;
    return false;
}
int main()
{
    int num;
    cout<<"Enter the number : \n";
    cin>>num;
    bool res = palindrome(num);
    if(res)
    {
      cout<<"The number is Palindrome\n";
    }
    else
    {
        cout<<"The number is not Palindrome\n";
    }

}