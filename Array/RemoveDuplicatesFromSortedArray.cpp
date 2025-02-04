#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int size;
   int i=0;
   cout<<"Enter the number of elements in the Array \n";
   cin >>size;
   vector<int> arr(size);
   cout<<"Enter the elements";
   for(int i = 0 ; i < size ; i++)
   {
     cout<<" ";
     cin>>arr[i];
   }
   
    for (int j=1 ; j<size; j++)
    {
      if(arr[i]!= arr[j])
      {
        arr[i+1] = arr[j];
        i++;
      }
    }
   cout<<i+1;
}