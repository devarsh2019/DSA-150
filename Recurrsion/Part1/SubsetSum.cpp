#include<iostream>
#include<vector>
using namespace std;
void printAlLSubset(vector<int>& arr ,vector<int> &ans , int index , vector<int> output,int sum,vector<vector<int>>& subset)
{
    if(index >= arr.size())
    {
        subset.push_back(output);
        ans.push_back(sum);
        return;
    }

    printAlLSubset(arr,ans,index+1,output,sum,subset);

    int element = arr[index];
    output.push_back(element);
     sum =0;
    for(int i =0 ;i<output.size();i++)
    {
        sum += output[i];
    }
    printAlLSubset(arr,ans,index+1,output,sum,subset);
    
    output.pop_back();
}
int main()
{
    vector<int> arr = {3,1,2};
   vector<int> ans;
   vector<vector<int>> subset;
    int index =0 ;
    vector<int> output;
    int sum =0;
    printAlLSubset(arr,ans,index,output,sum,subset);
    sort(ans.begin() ,ans.end());
    for(int res : ans)
    {
        cout<< res << " ";
    }
}