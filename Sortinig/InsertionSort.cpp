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
     for (int i = 0; i <= size - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}