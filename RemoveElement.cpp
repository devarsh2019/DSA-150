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

    cout<<"Enter the Value to be removed";
    cin>>value;

    for (int i =0 ; i<size;i++)
    {
        if(arr[i] == value)
        {
            size=size-1;
          for(int j = i ; j<size;j++)
          {
            arr[j] = arr[j+1];
          }
            i--;
        }
    }
    for (int i=0 ; i<size;i++)
    {
        cout << arr[i];
    }
    cout<<" "<<size;
}