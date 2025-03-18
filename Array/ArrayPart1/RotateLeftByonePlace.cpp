#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num;
    vector<int> ans;
    num = {1,2,3,4,5};
    for(int i=0 ;i<num.size() -1;i++)
    {
        ans.push_back(num[i+1]);
    }
    ans.push_back(num[0]);
    for(int n : ans)
    {
        cout << n <<" ";
    }
}