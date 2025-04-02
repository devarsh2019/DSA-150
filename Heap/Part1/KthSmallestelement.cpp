#include<iostream>
#include<queue>
using namespace std;
int Kthsmallestelement(int arr[] ,int k,int n)
{
    priority_queue<int> pq;
    for(int i =0 ; i <k ;i++)
    {
        pq.push(arr[i]);
    }
    for(int i =k ;i<n ;i++ )
    {
        if(arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
};
int main()
{
    int arr[6] ={58,49,53,55,52,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =2 ;
    int ans = Kthsmallestelement(arr,k,n);
    cout<< ans ;
}