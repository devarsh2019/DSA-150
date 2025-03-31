#include<iostream>
#include<vector>
using namespace std;
void printAlLSubset(vector<int>& arr ,vector<int> &ans , int index , vector<int> output,vector<vector<int>>& subset)
{
    if(index >= arr.size())
    {
        subset.push_back(output);
        return;
    }

    int element = arr[index];
    output.push_back(element);
    printAlLSubset(arr,ans,index+1,output,subset);
    output.pop_back();

    while (index + 1 < arr.size() && arr[index] == arr[index + 1]) {
        index++;
    }
    printAlLSubset(arr,ans,index+1,output,subset);

   
}
int main()
{
    vector<int> arr = {1,2,2};
   vector<int> ans;
   vector<vector<int>> subset;
    int index =0 ;
    vector<int> output;
    int sum =0;
    printAlLSubset(arr,ans,index,output,subset);
    for (const auto &row : subset) {
        for (const auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}