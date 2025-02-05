#include<iostream>
// pattern6
//      *
//     *** 
//    *****
//   *******

//      Logic 
// row1       __*__     
// row2       _***_
// row3       *****
// we have to print space,star,space
// In row1 2,1,2   (space its size-ith Pos-1 [3-0-1 =2], star = 2*i + 1 = 2*0 + 1 = 1)
// In row2 1,3,1
// In row3 0,5,0


using namespace std;
void pattern()
{
    int size =4;
   for (int i=0 ; i<size; i++)
   {
      //space
      for(int j=0 ; j<size-i-1; j++)
      {
        cout<<" ";
      }
      //star
      for(int j=0 ; j< 2*i + 1 ;j++)
      {
        cout<<"*";
      }
      //space
      for(int j=0 ; j<size-i-1; j++)
      {
        cout<<" ";
      }
      cout<<endl;
   }
}
int main()
{
  pattern();
}
