#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotate(vector<int>& num , int k)
{
  vector<int> temp;
  vector<int> ans;
  for(int i = 0 ;i<k;i++)
  {
     temp.push_back(num[i]);
  }
  for(int i = 0 ; i<num.size()-k;i++)
  {
    ans.push_back(num[i+k]);
  }
 for(int i =0 ; i<temp.size();i++)
 {
    ans.push_back(temp[i]);
 }
 return ans;
}
int main()
{
    vector<int> num = {1,2,3,4,5};
    num = leftRotate(num,2);
   for(int n : num)
   {
    cout<< n <<" ";
   }
}