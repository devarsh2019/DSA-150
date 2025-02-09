#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size,target;
    cout<<"Enter the Size of Array : ";
    cin >> size;
    vector<int> arr(size);
    for (int i=0 ; i<=size;i++)
    {
        cout <<" ";
        cin >> arr[i];
    }
     for (int i = 0; i < size - 2; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;  
    }
    for (int i = 0; i <= size; i++) {
    cout << arr[i] << " ";
  }
}