#include<iostream>
using namespace std;

int main()
{
    int size =3;
    int arr[size];
    int target ;
    int sum=0;

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