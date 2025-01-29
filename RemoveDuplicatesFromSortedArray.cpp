#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int size;
   cout<<"Enter the number of elements in the Array \n";
   cin >>size;
   vector<int> arr(size);
   cout<<"Enter the elements";
   for(int i = 0 ; i < size ; i++)
   {
     cout<<" ";
     cin>>arr[i];
   }
   
   for (int i = 0 ; i<size ; i++)
   {
     for (int j=i+1 ; j < size ; j++)
     {
        if(arr[i] == arr[j])
        {
            cout<< "duplicate"<<arr[j] <<" ";
            for (int k=j ; k<size ; k++)
            {
                arr[k] = arr[k+1];
            }
            size--;
        }
     }
   }

   for (int i =0 ; i< size ;i++)
   {
     cout <<arr[i] <<" " ;
   }
}