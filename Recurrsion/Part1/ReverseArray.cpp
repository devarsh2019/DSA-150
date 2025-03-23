#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr ,int n ,int k)
{
    if(n>= k) return;
    swap(arr[n] ,arr[k]);
    reverseArray(arr , n+1,k-1);
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
     reverseArray(arr,0 ,n-1);
    for(int res : arr)
    {
        cout<< res <<" ";
    }
}