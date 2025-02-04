#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size,value;
    cout<<"Enter the Size of the array";
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the Elements ";
     for (int i=0 ; i<=size;i++)
    {
        cin >> arr[i];
    }
    int val = arr[0];
    for (int i =0 ; i< size ; i++)
    {
        if (arr[i] > val)
        {
            val = arr[i];
        }
    }
    cout<<"Largest element in the array is \n"<< val;
    int secondLargest=0;
    for(int i=0 ; i<size;i++)
    {
        if(arr[i] > secondLargest && arr[i]!=val)
        {
            secondLargest=arr[i];
        }
    }
     cout<<"Second Largest element in the array is "<< secondLargest;
}