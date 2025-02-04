#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size,target;
   // int arr[size];
    int sum=0;
    cout<<"Enter the Size of Array : ";
    cin >> size;
    vector<int> arr(size);
    for (int i=0 ; i<=size;i++)
    {
        cout <<" ";
        cin >> arr[i];
    }
    cout << "Enter the Target";
    cin >> target;
    
    for(int i=0;i< size;i++)
    {
      for (int j =i+1 ;j<=size ; j++) 
      {
        int sum = arr[i] + arr[j];
        if(sum == target)
        {
            cout<<"[" << i<< "," <<j<< "]";
            
        }

      }
    }
}