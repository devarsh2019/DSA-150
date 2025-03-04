#include<iostream>
#include<vector>
using namespace std;
int nCr(int r , int c)
{
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < c; i++) {
        res = res * (r - i);
        res = res / (i + 1);
    }
    return res;
}
int pascaltriangle(int row, int column)
{
   int res =nCr(row-1,column-1);
   return res;
};
int main()
{
   //For variation1 row and column given tell the element at that place
   int r=3,c=2;
  int ans =  pascaltriangle(r,c);
  cout<<"Element at the 3 Row and 2 column is "<<ans<<endl; 
}