#include<iostream>

//    pattern 1
//      *****
//      *****
//      *****
//      *****
//      *****
using namespace std;

//for more readability we can do this code using function
int main()
{
    int size =5;
    //outer loop for rows
    for(int i = 0 ; i<size ; i++ )
    {
        //inner loop for rows
        for(int j = 0 ; j<size ; j++)
        {
            //printing the pattern
            cout <<"*";
        }
        //starts the outer loop in new line
        cout<<endl;
    }
}