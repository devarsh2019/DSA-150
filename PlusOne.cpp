#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int size,val;
    cout<<"Enter the Size of the Array\n";
    cin>>size;
    cout<<"Enter the elements\n";
    vector<int> arr(size);

    for (int i=0 ; i<size ; i++)
    {
       cin>>arr[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i]++;  
            goto printResult;
        }
    }
   arr[size-1] = arr[size-1] + 1;
   printResult:
   for (int i=0 ; i<size ; i++)
    {
       cout<<" " << arr[i];
    }
}