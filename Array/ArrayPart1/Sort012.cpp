#include<iostream>
#include<vector>
using namespace std;
vector<int> sortzeros( vector<int> arr)
{
    int cout0 =0,count1 =0,count2=0;
    vector<int> res;
    for(int i =0 ;i<arr.size();i++)
    {
        if(arr[i] == 0)
        {
            cout0++;
            res.push_back(arr[i]);
        }
    }
    for(int i =0 ;i<arr.size();i++)
    {
        if(arr[i] == 1)
        {
            count1++;
            res.push_back(arr[i]);
        }
    }
    for(int i =0 ;i<arr.size();i++)
    {
        if(arr[i] == 2)
        {
            count2++;
            res.push_back(arr[i]);
        }
    }
    return res;
};
int main()
{
    vector<int> arr = {2,0,2,1,1,0};
    vector<int> res = sortzeros(arr);
    for(int ans : res)
    {
        cout<<ans<<" ";
    }
}