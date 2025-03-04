#include<iostream>
using namespace std;
int maxsubarray(int* arr ,int n)
{
    int m = INT16_MIN;
     for(int i =0 ; i< n ;i++)
     {
        int sum = 0;
        for(int j=i ; j<n ;j++ )
        {
            sum += arr[j];
            m = max(m,sum);
        }  
     }
     return m;
};
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
   int res = maxsubarray(arr,n);
   cout<<res;
}