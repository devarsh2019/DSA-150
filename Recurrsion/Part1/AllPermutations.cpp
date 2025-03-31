#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void  printALLPermutations( vector<int>& arr, vector<vector<int>>& ans, vector<int>& q,  vector<int>& output)
{
    if(q.size() == arr.size())
    {
        ans.push_back(q);
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (output[i] == 0) { 
            q.push_back(arr[i]);
            output[i] = 1;

         
            printALLPermutations(arr, ans, q, output);
            q.pop_back();
            output[i] = 0;      
        }
    }
}
int main()
{
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output(arr.size(), 0);
    vector<int> q;
    int index =0;
    printALLPermutations(arr,ans,q,output);
    for(vector<int> res : ans)
    {
        for(int finalres : res)
        {
            cout<< finalres <<" ";
        }
        cout<<endl;
    }
}