#include<iostream>
#include<vector>
using namespace std;
void printSubset(vector<int> arr ,vector<int> output , int index ,vector<vector<int>>& ans)
{
    if(index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
   
    printSubset(arr,output ,index+1,ans);

   
    int element = arr[index];
    output.push_back(element);
    printSubset(arr,output,index+1,ans);
    
    output.pop_back();
}
int main()
{
    vector<int> arr ={1,2};
    vector<vector<int>> ans;
    vector<int> output;
    int index =0;
    printSubset(arr,output,index,ans);
    for (const auto &row : ans) {
        for (const auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}