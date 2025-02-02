#include<iostream>
#include<vector>>

using namespace std;
int main()
{
    int size,val;
    cout<<"Enter the Size of the Array\n";
    cin>>size;
    cout<<"Enter the sorted elements\n";
    vector<int> arr(size);

    for (int i=0 ; i<size ; i++)
    {
       cin>>arr[i];
    }
    cout<<"Enter the Target value to be insert";
    cin>>val;
    
    bool matched = false;
    for (int i=0 ; i<size ; i++)
    {
        if(arr[i] == val)
        {
            cout <<"Target value found at index \n"<<i;
            matched = true;
        }
    }
    if(!matched)
    {
        for(int i=0 ; i<size ;i++)
        {
            if (arr[i] > val)
            {
                cout<<"Target value can be Insert at Pos" <<i;
                matched =true;
                break;
            }          
        }
    }
    if(!matched)
    {
        cout<<"Target value can be Insert at Pos" <<size;
    }
}