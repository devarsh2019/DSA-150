#include<iostream>
// pattern3
// 1
// 12
// 123
// 1234
// 12345
using namespace std;
 void pattern()
 {
   for (int i=1 ;i<=5 ; i++)
   {
      for(int j=1 ; j<=i ;j++){
        cout<<j;
      }
      cout<<endl;
   }
 }
 int main()
 {
    pattern();
 }
