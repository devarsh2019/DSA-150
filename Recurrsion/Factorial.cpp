#include<iostream>
using namespace std;
void sum(int i , int &res)
{
    if(i<1) return;
    sum(i-1,res);
    res = res*i;
}
int main()
{
    int n=5;
    int res =1;
    sum(n,res);
    cout << res << " ";
}