#include<iostream>
#include<vector>
using namespace std;
void displaymatrix(vector<vector<int>>& arr ,int m,int n)
{
    for(int i=0 ;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the elements for Row "<<i<<"and column "<<j<<" ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0 ;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void setzeros(vector<vector<int>>& arr,int m ,int n)
{
    vector<int> row(m,1);
    vector<int> col(n,1);
    for(int i=0 ;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    for(int i=0 ;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (row[i] == 0 || col[j] == 0) {
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0 ;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
  int m,n;
  cout<<"Enter the number of Rows ";
  cin>>m;
  cout<<"Enter the number of Column ";
  cin>>n;
  vector<vector<int>> arr(m ,vector<int> (n));
  displaymatrix(arr,m,n);
  setzeros(arr,m,n);
}