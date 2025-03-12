#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    stack<pair<int,int>> st;
    public:
    void push(int val)
    {
    if(st.empty())
    {
        st.push({val,val});
    }
    else
    st.push({val ,min(val,st.top().second)});
   }
   int getmin()
   {
   return st.top().second;
   }
   void pop()
   {
    st.pop();
   }
   int top()
   {
    return st.top().first;
   }
};
int main()
{
   Stack s;
   s.push(12);
   s.push(15);
   s.push(10);
  cout<<s.getmin() <<endl;
   s.pop();
   cout<<"Stack top"<<s.top()<<endl;
   cout<<s.getmin() <<endl;
}