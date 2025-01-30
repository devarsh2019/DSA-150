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

    int k=0;
    for (int i =0 ; i< size; i++)
    {
        if (arr[i] != value)
        {
            arr[k] = arr[i];
            k++;
        }
    }
   for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew size: " << k << endl;
}