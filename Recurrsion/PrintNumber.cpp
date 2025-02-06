#include<iostream>
using namespace std;
void recFunction(int i ,int n)
{
    if(i>n)return;
    cout<<i<<endl;
    recFunction(i+1,n);
}
int main()
{
    int num=10;
    recFunction(1,num);
}