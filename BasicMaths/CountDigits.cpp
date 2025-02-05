#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int& num)
{
    //Time complexity O(1)
    int res = (int)(log10(num) + 1);
    return res; 
}
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    int res = countDigit(num);
    cout<<"Number of digits is : "<<res;
}
