#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size,target;
    cout<<"Enter the Size of Array : ";
    cin >> size;
    vector<int> arr(size);
    for (int i=0 ; i<size;i++)
    {
        cout <<" ";
        cin >> arr[i];
    }
     for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}